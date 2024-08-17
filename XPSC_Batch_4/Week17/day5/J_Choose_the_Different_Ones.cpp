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
        ll n, m, k;
        cin >> n >> m >> k;
        vector<ll> v(n);
        vector<ll> v1(m);
        vector<ll> cnt(k + 1, 0);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] <= k)
            {
                cnt[v[i]] |= 1;
            }
        }

        for (int i = 0; i < m; i++)
        {
            cin >> v1[i];
            if (v1[i] <= k)
            {
                cnt[v1[i]] |= 2;
            }
        }

        vector<ll> v2(4, 0);
        for (int i = 0; i <= k; i++)
        {
            v2[cnt[i]]++;
        }

        if (v2[1] > k / 2 || v2[2] > k / 2 || v2[1] + v2[2] + v2[3] != k)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}