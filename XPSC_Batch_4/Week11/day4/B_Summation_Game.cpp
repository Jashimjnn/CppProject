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
        ll n, k, x;
        cin >> n >> k >> x;
        vector<ll> v(n + 1);
        for (ll i = 1; i <= n; i++)
        {
            cin >> v[i];
        }
        sort(begin(v), end(v));
        vector<ll> pre(n + 1);
        pre[1] = v[1];
        for (ll i = 2; i <= n; i++)
        {
            pre[i] = pre[i - 1] + v[i];
        }
        ll mx = LLONG_MIN;
        for (ll i = n; i >= 0; i--)
        {
            ll z = n - i;
            if (z > k)
            {
                break;
            }
            ll y = min(i, x);
            ll sum = (pre[i - y] - (pre[i] - pre[i - y]));
            mx = max(mx, sum);
        }
        cout << mx << endl;
    }
    return 0;
}
