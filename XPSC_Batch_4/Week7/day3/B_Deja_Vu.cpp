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
        ll n, q;
        cin >> n >> q;
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        vector<ll> v1, v2;
        for (int i = 0; i < q; i++)
        {
            ll x;
            cin >> x;
            v2.push_back(x);
        }
        set<ll> st;
        for (ll i = 0; i < q; i++)
        {
            if (st.count(v2[i]))
            {
                continue;
            }
            st.insert(v2[i]);
            for (ll j = 0; j < n; j++)
            {
                if (v[j] % (1 << v2[i]) == 0)
                {
                    v[j] += (1 << (v2[i] - 1));
                }
            }
        }
        for (auto x : v)
        {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}