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
    ll t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (ll i = 0, x; i < n; i++)
        {
            cin >> x;
        }
        cout << 4 << endl
             << 1 << " " << 1 + (n % 2) << endl
             << 1 << " " << 1 + (n % 2) << endl
             << 1 + (n % 2) << " " << n << endl
             << 1 + (n % 2) << " " << n << endl;
    }
    return 0;
}