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
        set<ll> s;
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
            s.insert(v[i]);
        }
        ll mn = LLONG_MAX;
        for (auto it = s.begin(); it != s.end(); it++)
        {
            ll cnt = 0;
            for (ll i = 0; i < n; i++)
            {
                if (v[i] != *it)
                {
                    cnt++;
                    i += k;
                    i--;
                }
            }
            mn = min(mn, cnt);
        }
        cout << mn << endl;
    }
    return 0;
}