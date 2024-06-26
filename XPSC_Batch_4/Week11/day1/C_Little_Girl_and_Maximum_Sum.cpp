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
    ll n, q;
    cin >> n >> q;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vector<ll> d(n + 1);
    for (ll i = 1; i <= q; i++)
    {
        ll l, r;
        cin >> l >> r;
        l--, r--;
        d[l]++;
        d[r + 1]--;
    }
    for (ll i = 1; i <= n; i++)
    {
        d[i] = d[i - 1] + d[i];
    }

    sort(v.rbegin(), v.rend());
    sort(d.rbegin(), d.rend());

    ll sum = 0;
    for (ll i = 0; i < n; i++)
    {
        sum += (1LL * d[i] * v[i]);
    }
    cout << sum << endl;
    return 0;
}