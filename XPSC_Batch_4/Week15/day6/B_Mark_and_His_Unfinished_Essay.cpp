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
        ll n, c, q;
        cin >> n >> c >> q;
        string s;
        cin >> s;

        vector<pair<ll, ll>> v(c);
        vector<pair<ll, ll>> v1(c);

        ll flag = n;

        for (int i = 0; i < c; i++)
        {
            ll l, r;
            cin >> l >> r;
            v[i] = {l, r};
            v1[i] = {flag + 1, flag + (r - l + 1)};
            flag = v1[i].second;
        }

        while (q--)
        {
            ll k;
            cin >> k;
            if (k <= n)
            {
                cout << s[k - 1] << endl;
                continue;
            }
            for (int i = c - 1; i >= 0; i--)
            {
                if (k >= v1[i].first and k <= v1[i].second)
                {
                    k = (v[i].first) + (k - v1[i].first);
                }
            }
            cout << s[k - 1] << endl;
        }
    }
    return 0;
}