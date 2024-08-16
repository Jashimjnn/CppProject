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
        string str;
        cin >> str;
        string tmp = "";
        if (n == 1)
        {
            tmp += str[0];
        }
        for (ll i = 0; i < n - 1; i++)
        {
            if (i == 0)
            {
                tmp += str[i];
            }
            if (str[i] == str[i + 1] and str[i] == '0')
            {
                continue;
            }
            tmp += str[i + 1];
        }
        ll cnt0 = count(tmp.begin(), tmp.end(), '0');
        ll cnt1 = count(tmp.begin(), tmp.end(), '1');
        if(cnt0<cnt1)
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