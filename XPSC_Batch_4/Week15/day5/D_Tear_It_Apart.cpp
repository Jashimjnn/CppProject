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
        string str;
        cin >> str;
        ll n = str.size();
        ll cnt = 0;
        ll mn = INT_MAX, mx;
        for (char i = 'a'; i <= 'z'; i++)
        {
            cnt = 0, mx = 0;
            for (ll j = 0; j < n; j++)
            {
                if (str[j] != i)
                {
                    cnt++;
                    if (cnt > mx)
                    {
                        mx = cnt;
                    }
                }
                else
                {
                    cnt = 0;
                }
            }

            if (mx < mn)
            {
                mn = mx;
            }
        }

        if (mn == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            cnt = 0;
            while (mn != 1)
            {
                mn /= 2;
                cnt++;
            }
            cout << cnt + mn << endl;
        }
    }
    return 0;
}