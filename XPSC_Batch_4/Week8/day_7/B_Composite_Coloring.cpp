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
        map<ll, ll> mp;
        ll cnt = 1;
        ll n;
        cin >> n;
        vector<ll>v(n);
        ll en;
        for (ll i = 0; i < n; i++)
        {
            cin >> en;
            for (ll j = 2; j <= 31; j++)
                if (en % j == 0)
                {
                    if (mp.count(j) <= 0)
                    {
                        mp[j] = cnt++;
                    }
                    v[i] = mp[j];
                    break;
                }
        }
        cout << (cnt - 1) << endl;
        for (ll i = 0; i < n; i++)
        {
            cout << v[i] << ' ';
        }
        cout << endl;
    }
    return 0;
}