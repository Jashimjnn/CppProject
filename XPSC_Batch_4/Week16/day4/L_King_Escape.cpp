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

ll n, a1, a2, b1, b2, c1, c2;

main()
{
    ll n;
    cin >> n;
    bool flag = false;
    while (n--)
    {
        cin >> a1 >> a2 >> b1 >> b2 >> c1 >> c2;
    }

    if ((b1 < a1 && c1 < a1) || (b1 > a1 && c1 > a1))
    {

        if ((b2 < a2 && c2 < a2) || (b2 > a2 && c2 > a2))
        {
            flag = true;
        }
    }

    if (flag)
    {
        Y;
    }
    else
    {
        N;
    }
}