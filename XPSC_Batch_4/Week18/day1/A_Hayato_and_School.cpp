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
        vector<ll> v, v1;
        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            if (x % 2 == 0)
            {
                v1.push_back(i);
            }
            else
            {
                v.push_back(i);
            }
        }
        if (v.size() >= 3)
        {
            cout << "YES"<<endl;
            cout << v[0] << " " << v[1] << " " << v[2] << endl;
        }
        else if (v.size() >= 1 && v1.size() >= 2)
        {
            cout << "YES"<<endl;
            cout << v[0] << " " << v1[0] << " " << v1[1] << endl;
        }
        else
        {
            cout << "NO"<<endl;
        }
    }
    return 0;
}