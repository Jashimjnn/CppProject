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
        string str1, str2;
        cin >> str1 >> str2;
        bool flag = false;
        for (int i = 0; i < str1.size() - 1; i++)
        {
            if (str1[i] == '0' && str1[i + 1] == '1' && str1[i] == str2[i] && str1[i + 1] == str2[i + 1])
            {
                flag = true;
                break;
            }
        }
        if (flag == true)
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