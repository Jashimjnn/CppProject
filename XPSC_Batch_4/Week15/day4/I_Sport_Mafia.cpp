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
    ll n, k;
    cin >> n >> k;
    ll lft = 0, rght = n, cnt = 0;
    while (lft <= rght)
    {
        ll md = (lft + rght) / 2;
        ll sum = md * (md + 1) / 2;
        ll flag = n - md;

        if (sum - flag == k)
        {
            cnt = md;
            break;
        }
        else if (sum - flag < k)
        {
            lft = md + 1;
        }
        else
        {
            rght = md - 1;
        }
    }
    ll ans = n - cnt;
    cout << ans << endl;

    return 0;
}