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

        vector<ll>v(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        set<ll> st;
        set<ll> st1;
        map<ll, ll> mp;

        for (ll i = 0; i < n; i++)
        {
            if (st.count(v[i]) == 0)
            {
                st1.insert(i);
            }
            st.insert(v[i]);
            mp[v[i]] = i;
        }
        set<ll> st2;
        for (auto x : mp)
        {
            st2.insert(x.second);
        }
        ll sum = 0;
        ll cnt = 0;
        for (ll i = n - 1; i >= 0; i--)
        {

            if (st2.count(i))
            {
                cnt++;
            }
            if (st1.count(i))
            {
                sum += cnt;
            }
        }

        cout << sum << endl;
    }
    return 0;
}