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
        ll h, n;
        cin >> h >> n;
        vector<ll> v(n), v1(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        for (ll i = 0; i < n; i++)
        {
            cin >> v1[i];
        }
        ll lft = 1;
        ll rght = 1e12;
        ll cnt = rght;
        while (lft <= rght)
        {
            ll md = (lft + rght) / 2ll;
            ll sum = 0;
            for (ll i = 0; i < n; i++)
            {
                ll x = (md - 1ll) / v1[i];
                x += 1ll;
                sum += (x * v[i]);
                if (sum >= h)
                {
                    break;
                }
            }
            if (sum >= h)
            {
                cnt = min(cnt, md);
                rght = md - 1ll;
            }
            else
            {
                lft = md + 1ll;
            }
        }
        cout << cnt << endl;
    }

    return 0;
}