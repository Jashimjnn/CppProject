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
        ll n, x, y;
        cin >> n >> x >> y;
        string str;
        cin >> str;
        ll p = 0, q = 0;
        for (int i = 0; i < str.size(); i++)
        {
            if (str[i] == 'R')
            {
                p++;
            }
            else if (str[i] == 'L')
            {
                p--;
            }
            else if (str[i] == 'U')
            {
                q++;
            }
            else
            {
                q--;
            }
        }
        ll d = abs((p - x)) + abs((q - y));

        if (d <= n && (n - d) % 2 == 0)
        {
            yy;
        }
        else
        {
            nn;
        }
    }
    return 0;
}
