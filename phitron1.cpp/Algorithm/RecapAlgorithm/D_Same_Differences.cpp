#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
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
        map<ll, ll>mp;
        for (int i = 0; i < n; i++)
        {
            mp[v[i] - i]++;
        }
        ll cnt = 0;
        for (auto x : mp)
        {
            ll ans = x.second;
            cnt += ans * (ans - 1) / 2;
        }
        cout << cnt << endl;
    }
    return 0;
}