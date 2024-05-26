#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define y cout << "Yes" << endl;
#define N cout << "NO" << endl;
#define nn cout << "No" << endl;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        if (is_sorted(v.begin(), v.end()))
        {
            y;
        }
        else
        {
            ll n = v.size();
            ll flag = 0;
            for (int i = 0; i < n - 1; ++i)
            {
                if (v[i] > v[i + 1])
                {
                    flag = i;
                    break;
                }
            }
            vector<ll> v2(v.begin() + flag + 1, v.end());
            v2.insert(v2.end(), v.begin(), v.begin() + flag + 1);
            if (is_sorted(v2.begin(), v2.end()))
            {
                y;
            }
            else
            {
                nn;
            }
        }
    }
    return 0;
}

