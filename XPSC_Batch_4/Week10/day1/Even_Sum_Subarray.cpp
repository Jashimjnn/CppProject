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
        vector<ll> v(n);
        ll sum = 0;
        for (auto &x : v)
        {
            cin >> x;
            sum += x;
        }
        if (n == 1)
        {
            if (v[0] % 2 == 0)
            {
                one;
            }
            else
            {
                cout << 0 << endl;
            }
            continue;
        }
        if (sum % 2 == 0)
        {
            cout << n << endl;
            continue;
        }
        ll cnt = 0, cnt1 = -1;
        for (ll i = 0; i < n; ++i)
        {
            if (v[i] % 2 == 0)
            {
                continue;
            }
            else
            {
                if (cnt == 0)
                {
                    cnt = i;
                }
                cnt1 = i;
            }
        }
        ll ans = max(n - cnt - 1, cnt1);
        cout << ans << endl;
    }
    return 0;
}