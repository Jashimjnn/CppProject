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
void fun()
{
    ll x, y, k;
    cin >> x >> y >> k;
    x++;
    k--;
    while (x != y)
    {
        if (x % y == 0)
        {
            while (x % y == 0)
            {
                x /= y;
            }
        }
        if (k == 0)
        {
            cout << x << endl;
            return;
        }
        ll flag = y - x % y;
        if (flag <= k)
        {
            x = x + flag;
            k = k - flag;
        }
        else
        {
            cout << x + k << endl;
            return;
        }
    }
    cout << k % (y - 1) + 1 << endl;
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        fun();
    }
    return 0;
}