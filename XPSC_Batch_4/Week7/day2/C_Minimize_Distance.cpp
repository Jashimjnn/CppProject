#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        vector<ll> v(n), v1, v2;
        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] < 0)
            {
                v1.push_back(abs(v[i]));
                flag = true;
            }
            else
            {
                v2.push_back(v[i]);
            }
        }
        if (flag == true)
        {
            sort(v1.rbegin(), v1.rend());
            sort(v2.rbegin(), v2.rend());
            ll sum = 0;
            for (int i = 0; i < v1.size(); i += k)
            {
                sum += abs(2 * v1[i]);
            }
            for (int i = 0; i < v2.size(); i += k)
            {
                sum += abs(2 * v2[i]);
            }
            ll mx = 0;
            if (!v1.empty())
            {
                mx = v1[0];
            }
            if (!v2.empty())
            {
                mx = max(mx, v2[0]);
            }
            cout << sum - mx << endl;
        }
        else
        {
            sort(v.rbegin(), v.rend());
            ll sum = 0;
            for (int i = 0; i < n; i += k)
            {
                sum += abs(2 * v[i]);
            }
            cout << sum - v[0] << endl;
        }
    }
    return 0;
}