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
        string str, str1;
        cin >> str >> str1;
        if (str[0] == str1[0])
        {
            cout << "YES" << endl;
            cout << str[0] << "*" << endl;
            continue;
        }
        if (str[str.length() - 1] == str1[str1.length() - 1])
        {
            cout << "YES" << endl;
            cout << "*" << str[str.length() - 1] << endl;
            continue;
        }
        bool flag = false;
        for (int i = 0; i < str1.length() - 1; ++i)
        {
            string tmp = str1.substr(i, 2);
            if (str.find(tmp) != -1)
            {
                cout << "YES" << endl;
                cout << "*" << tmp << "*" << endl;
                flag = true;
                break;
            }
        }
        if (!flag)
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}