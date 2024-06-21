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
        if (n <= 2)
        {
            for (int i = 1; i <= n; i++)
            {
                cout << i << " ";
            }
            cout << endl;
            for (int i = n; i >= 1; i--)
            {
                cout << i << " ";
            }
            cout << endl;
            continue;
        }
        else
        {
            vector<ll> v(n);
            for (int i = 0; i < n; i++)
            {
                v[i] = i + 1;
            }
            for (int i = 0; i < n; i++)
            {
                cout << v[i] << " ";
            }
            cout << endl;
            ll x = (n + 1) / n;
            vector<ll> v1(n);
            for (int i = 0; i < n; i++)
            {
                v1[i] = v[(i + x) % n];
            }
            for (int i = 0; i < n; i++)
            {
                cout << v1[i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
