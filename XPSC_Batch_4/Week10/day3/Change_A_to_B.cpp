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
        ll a, b, k;
        cin >> a >> b >> k;
        ll flag = b;
        ll cnt = 0;
        while (flag > a)
        {
            if (flag % k == 0 && flag / k >= a)
            {
                flag /= k;
                cnt++;
            }
            else
            {
                if ((flag / k) < a)
                {
                    cnt += (flag - a);
                    flag -= (flag - a);
                }
                else
                {
                    cnt += (flag % k);
                    flag -= (flag % k);
                }
                if (flag <= a)
                {
                    break;
                }
            }
        }

        cout << cnt << endl;
    }
    return 0;
}