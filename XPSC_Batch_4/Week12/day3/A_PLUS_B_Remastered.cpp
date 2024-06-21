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
        vector<ll> v(n), v1(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> v1[i];
        }
        sort(begin(v), end(v));
        sort(rbegin(v1), rend(v1));
        ll x = v[0] + v1[0];
        bool flag = true;
        for (int i = 1; i < n; i++)
        {
            if (x != (v[i] + v1[i]))
            {
                flag = false;
                break;
            }
        }
        if (flag == true)
        {
            for (int i = 0; i < n; i++)
            {
                cout << v[i] << " ";
            }
            cout << endl;
            for (int i = 0; i < n; i++)
            {
                cout << v1[i] << " ";
            }
            cout << endl;
        }
        else
        {
            cout<<-1<<endl;
        }
    }
    return 0;
}