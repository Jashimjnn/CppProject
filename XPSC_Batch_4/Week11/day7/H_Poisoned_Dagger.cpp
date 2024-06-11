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

        ll n, k;
        cin >> n >> k;
        vector<ll> v(n);
        for (auto &x : v)
        {
            cin >> x;
        }
        ll left = 1, right = 1e18;
        while (left <= right)
        {
            ll md = (left + right) / 2;
            ll flag = md;
            for (ll i = 0; i < n - 1; i++)
            {
                flag += min(md, v[i + 1] - v[i]);
            }
            if (flag < k)
            {
                left = md + 1;
            }
            else
            {
                right = md - 1;
            }
        }
        cout << right + 1 << endl;
    }
    return 0;
}