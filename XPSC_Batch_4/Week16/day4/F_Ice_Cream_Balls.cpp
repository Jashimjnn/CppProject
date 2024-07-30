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
        ll l = 0, r = min<ll>(2e9, 2 * n);
        while (r - l > 1)
        {
            ll m = (l + r) >> 1;
            if (m * (m - 1) / 2 + m < n)
            {
                l = m;
            }
            else
            {
                r = m;
            }
        }
        ll y = n - r * (r - 1) / 2;
        if ((r + 1) * r / 2 <= n)
        {
            cout << min(r + y, r + 1 + n - (r + 1) * r / 2) <<endl;
        }
        else
        {
            cout << r + y << endl;
        }
    }
    return 0;
}