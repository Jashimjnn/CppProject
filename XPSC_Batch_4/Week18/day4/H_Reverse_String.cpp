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
    ll q;
    cin >> q;
    while (q--)
    {
        string str, str1;
        cin >> str >> str1;
        string tmp = "NO";
        for (int i = 0; i < str.size(); i++)
        {
            string tmp1 = "";
            for (int j = 0; j <= i; j++)
            {
                tmp1 += str[j];
            }
            for (int j = i - 1; j >= 0; j--)
            {
                tmp1 += str[j];
            }
            if (tmp1.find(str1) != -1)
            {
                tmp = "YES";
                break;
            }
        }
        cout << tmp << endl;
    }
    return 0;
}