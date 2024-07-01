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
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        if (is_sorted(v.begin(), v.end()))
        {
            cout << 0 << endl;
            continue;
        }

        ll cnt = 0, x;
        ll mx = 0;
        for (int i = 1; i < n; i++)
        {
            if (v[i] < v[i - 1])
            {
                cnt += v[i - 1] - v[i];
                mx = max(mx, v[i - 1] - v[i]);
                v[i] += (v[i - 1] - v[i]);
            }
        }
        cout << cnt + mx << endl;
    }
    return 0;
}
