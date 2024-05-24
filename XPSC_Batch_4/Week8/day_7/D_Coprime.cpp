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
        ll x,q;
        map<ll, ll> mp;
        q = n;
        while (q--)
        {
            cin >> x;
            mp[x] = n - q;
        }
        x = -1;
        for (auto [fr, se] : mp)
        {
            for (auto [y, q] : mp)
            {
                if (__gcd(fr, y) == 1)
                {
                    x = max(x, se + q);
                }
            }
        }
        cout << x << endl;
    }
    return 0;
}