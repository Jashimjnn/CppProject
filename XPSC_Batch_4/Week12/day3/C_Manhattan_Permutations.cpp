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
        if (k == 0)
        {
            yy;
            for (int i = 1; i <= n; i++)
            {
                cout << i << " ";
            }
            cout << endl;
            continue;
        }
        vector<ll> v;
        ll x = n / 2;
        for (int i = n; i > x + 1; i--)
        {
            v.push_back(i);
        }
        for (int i = 1; i <= x + 1; i++)
        {
            v.push_back(i);
        }
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += abs((v[i] - (i + 1)));
        }
        if (sum >= k)
        {
            yy;
            for (int i = 0; i < n; i++)
            {
                cout << v[i] << " ";
            }
            cout << endl;
        }
        else
        {
            nn;
        }
    }
    return 0;
}