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
        ll mx, mx1 = LLONG_MIN;
        for (int i = 0; i < 22; i++)
        {
            ll a, b;
            cin >> a >> b;
            ll x = a + 20 * b;
            if (mx1 < x)
            {
                mx1 = max(mx1, x);
                mx = i;
            }
        }
        cout<<(mx+1)<<endl;
    }
    return 0;
}