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
        vector<ll>v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        ll tmp = v[n - 1];
        vector<ll>v1(n,0);
        for (int i = n - 1; i >= 0; i--)
        {
            if (tmp != 0 || v[i] != 0)
            {
                v1[i] = 1;
                tmp = max(tmp, v[i]);
                tmp--;
            }
            else
            {
                tmp = v[i];
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << v1[i] << " ";
        }
        cout << endl;
    }
    return 0;
}