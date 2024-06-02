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
        ll cnt = 0;
        vector<ll> v(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        map<pair<ll, ll>, ll> mp, mp1, mp2;
        map<vector<ll>, ll> m;
        for (ll i = n - 3; i >= 0; i--)
        {
            ll x = v[i];
            ll y = v[i + 1];
            ll z = v[i + 2];

            cnt += mp[{x, y}];
            cnt += mp1[{y, z}];
            cnt += mp2[{x, z}];

            cnt -= (3ll * m[{x, y, z}]);

            mp[{x, y}]++;
            mp1[{y, z}]++;
            mp2[{x, z}]++;
            m[{x, y, z}]++;
        }

        cout << cnt << endl;
    }
    return 0;
}