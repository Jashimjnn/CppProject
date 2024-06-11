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
        ll n, m;
        cin >> n >> m;
        ll cnt=0;
        ll mx = LLONG_MIN;
        string tmp;
        ll flag;
        for (int i = 1; i <= n; i++)
        {
            string str;
            cin >> str;
            ll x = count(str.begin(), str.end(), '#');
            if (mx < x)
            {
                mx = x;
                tmp = str;
                flag = i;
            }
        }
        ll y = 0, z = 0;
        for (int i = 0; i < tmp.size(); i++)
        {
            if (tmp[i] == '.' && tmp[i + 1] == '#')
            {
                y = i + 1;
            }
            if (tmp[i] == '#')
            {
                cnt++;
            }
        }
        if(cnt%2==0)
        {
            cout << flag << " " << (y+(cnt)/2) << endl;
        }
        else
        {
            cout << flag << " " << (y+(cnt)/2+1) << endl;
        }
    }
    return 0;
}