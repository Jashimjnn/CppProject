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
        set<ll> st;
        map<ll, ll> mp, mpp;
        for (auto &x : v)
        {
            cin >> x;
            st.insert(x);
            mpp[x]++;
        }
        for (auto it : st)
        {
            ll x = it;
            while (x <= n)
            {
                mp[x] += mpp[it];
                x += it;
            }
        }
        ll mx = 0;
        for (auto it : mp)
        {
            mx = max(mx, it.second);
        }
        cout << mx << endl;
    }
    return 0;
}