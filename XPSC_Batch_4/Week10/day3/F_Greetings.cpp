/**
 *    author:  Mohammad Jashim Uddin
 **/
#include <iostream>
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define yy cout << "Yes" << endl;
#define N cout << "NO" << endl;
#define nn cout << "No" << endl;
#define one cout << "1" << endl;
#define onee cout << "-1" << endl;
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;

        vector<pair<ll, ll>> v(n);
        pbds<ll> st;

        for (int i = 0; i < n; i++)
        {
            ll a, b;
            cin >> a >> b;
            v[i] = {a, b};
            st.insert(b);
        }

        sort(v.begin(), v.end());
        ll cnt = 0;
        for (auto x : v)
        {
            ll a = x.first;
            ll b = x.second;
            ll ans = st.order_of_key(b);
            cnt += ans;
            st.erase(b);
        }
        cout << cnt << endl;
    }

    return 0;
}
