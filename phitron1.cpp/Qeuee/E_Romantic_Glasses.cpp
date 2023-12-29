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
        vector<ll> v(n + 1);
        for (ll i = 1; i <= n; i++)
        {
            cin >> v[i];
        }
        unordered_map<ll, ll> mp;
        ll sumo = 0;
        ll sume = 0;
        bool flag = false;
        for (ll i = 1; i <= n; i++)
        {
            if (i % 2 == 0)
            {
                sume += v[i];
            }
            else
            {
                sumo += v[i];
            }
            ll r = sumo - sume;
            if (r == 0 || mp.find(r) != mp.end())
            {
                flag = true;
                break;
            }
            mp[r] - 1;
        }
        if (flag)
        {
            Y;
        }
        else
        {
            N;
        }
    }
    return 0;
}