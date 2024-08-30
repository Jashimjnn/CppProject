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
    for (int i = 1; i <= t; i++)
    {
        string str, str1;
        cin >> str >> str1;
        if (str.size() == str1.size())
        {
            if (str == str1)
            {
                cout << str << endl;
            }
            else
            {
                cout << -1 <<endl;
            }
            continue;
        }
        if (str.size() > str1.size())
        {
            swap(str, str1);
        }
        ll n = str.size();
        ll m = str1.size();
        ll l = (n * m) / __gcd(n, m);
        string ans = "";
        ll k = 0;
        for (int i = 0; i < l; i++)
        {
            ans += (char)str[k];
            k++;
            k %= n;
        }
        k = 0;
        bool flag = true;
        for (int i = 0; i < l; i++)
        {
            if (ans[i] != str1[k])
            {
                flag = false;
                break;
            }
            k++;
            k %= m;
        }
        if(flag==true)
        {
            cout << ans <<endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}