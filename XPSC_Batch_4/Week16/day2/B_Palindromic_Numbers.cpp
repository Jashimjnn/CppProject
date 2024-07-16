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
        string str, str1;
        cin >> str;
        char ch;
        if (str[0] == '9')
        {
            vector<char> v(n + 1, '1');
            for (int i = n; i >= 1; i--)
            {
                if (str[i - 1] <= v[i])
                {
                    ch = v[i] - str[i - 1] + '0';
                }
                else
                {
                    ch = v[i] - str[i - 1] + 10 + '0';
                    v[i - 1] -= 1;
                }
                str1 = ch + str1;
            }
            cout << str1 << endl;
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                ch = ('9' - str[i]) + '0';
                str1 += ch;
            }
            cout << str1 << endl;
        }
    }
    return 0;
}