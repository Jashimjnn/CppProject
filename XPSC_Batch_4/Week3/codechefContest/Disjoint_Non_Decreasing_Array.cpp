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
        ll n;
        cin >> n;
        vector<ll> v(n+1);
        ll d = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];
            if (v[i - 1] > v[i])
            {
                d = max(d, v[i - 1] - v[i]);
            }
        }
        bool flag = true;
        for (int i = 1; i < n - 1; i++)
        {
            if (v[i - 1] > v[i] && v[i] + d > v[i + 1])
            {
                flag = false;
                break;
            }
        }
        if (flag == true)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}