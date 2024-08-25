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

        map<ll, ll> mp;
        ll mx = 0;

        ll sum = 0;
        for (auto x : v)
        {
            sum += x;
        }
        for (ll i = 0; i < n; i++)
        {
            mp[v[i]]++;
            if (mp[v[i]] >= 2)
            {
                if (v[i] > mx)
                {
                    mx = v[i];
                }
            }
            v[i] = mx;
        }

        mp.clear();
        for (ll i = 0; i < n; i++)
        {
            mp[v[i]]++;
        }

        ll prev = 0;
        ll doub = 0;
        for (ll i = 0; i < n; i++)
        {
            if (v[i] != prev)
            {
                sum += v[i];
                if (mp[v[i]] == 1)
                {
                    sum += (n - i - 1) * doub;
                }
                else
                {
                    sum += (n - i - 1) * v[i];
                    doub = v[i];
                }
            }
        }

        cout << sum << endl;
    }
    return 0;
}