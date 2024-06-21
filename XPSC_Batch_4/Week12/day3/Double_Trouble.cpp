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
        vector<ll> x(n);
        vector<ll> p(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> x[i];
        }

        for (ll i = 0; i < n; i++)
        {
            cin >> p[i];
        }

        vector<ll> pre(n, 0);
        vector<ll> suff(n, 0);

        for (ll i = 1; i < n; i++)
        {
            if ((x[i] - p[i]) <= x[i - 1])
            {
                pre[i] = pre[i - 1] + 1;
            }
        }

        for (ll i = n - 2; i >= 0; i--)
        {
            if ((x[i] + p[i]) >= x[i + 1])
            {
                suff[i] = suff[i + 1] + 1;
            }
        }
        bool flag = false;
        for (ll i = 0; i < n; i++)
        {
            if (i == 0)
            {
                ll c_p = suff[i] + 1;
                if (c_p == n || (c_p + 1 + suff[i + c_p] == n))
                {
                    flag = true;
                    break;
                }
            }
            else if (i == n - 1)
            {
                ll c_p = pre[i] + 1;
                if (c_p == n || (c_p + 1 + pre[i - 1 - pre[i]] == n))
                {
                    flag = true;
                    break;
                }
            }
            else if (2 + pre[i] + suff[i + 1] == n)
            {
                flag = true;
                break;
            }
        }
        if (2 + suff[0] + pre[n - 1] >= n)
        {
            flag = true;
        }
        if (2 + suff[1] == n)
        {
            flag = true;
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