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
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        if (n == 1)
        {
            if (v[0] != 1)
            {
                N;
                continue;
            }
            else
            {
                Y;
                continue;
            }
        }
        if(v[0]!=n)
        {
            N;
            continue;
        }
        ll cnt = count(v.begin(), v.end(), v[0]);
        if (n == v[0] && n == cnt)
        {
            Y;
            continue;
        }
        vector<ll> v1, v2;
        for (int i = 1; i < n; i++)
        {
            if (v[i - 1] - v[i] != 0)
            {
                v1.push_back(v[i - 1] - v[i]);
            }
        }
 
        ll r = n - 1;
        for (int i = n - 2; i >= 0; i--)
        {
            if (v[i] != v[i + 1])
            {
                v2.push_back(r - i);
                r = i;
            }
        }
        bool flag = true;
        for (int i = 0; i < v1.size(); i++)
        {
            if (v1[i] != v2[i])
            {
                flag = false;
                break;
            }
        }
        if (flag==true)
        {
            Y;
        }
        else
        {
            N;
        }
    }
    return 0;
}