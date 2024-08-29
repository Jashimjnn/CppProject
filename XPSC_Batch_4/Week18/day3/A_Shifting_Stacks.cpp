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
        vector<ll> v(n);
        for (auto &i : v)
        {
            cin >> i;
        }
        ll sum = 0, sum1 = 0;
        bool flag = true;
        for (int i = 0; i < n; ++i)
        {
            sum1 += i;
            sum += v[i];
            if (sum < sum1)
            {
                N;
                flag = false;
                break;
            }
        }
        if (flag == true)
        {
            Y;
        }
    }
    return 0;
}