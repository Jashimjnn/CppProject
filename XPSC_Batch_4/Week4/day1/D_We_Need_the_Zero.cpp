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
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        ll x = 0;
        for (int i = 0; i < n; i++)
        {
            x ^= v[i];
        }
        for (int i = 0; i < n; i++)
        {
            v[i] ^= x;
        }
        ll ans = 0;
        for (int i = 0; i < n; i++)
        {
            ans ^= v[i];
        }
        if (ans == 0)
        {
            cout << x << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}