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
    string str;
    cin >> str;
    ll cnt1 = count(str.begin(), str.end(), str[0]);
    if (str.size() == cnt1)
    {
        cout << str.size() << endl;
    }
    else
    {
        ll mx = 1;
        ll cnt = 1;
        for (int i = 1; i < str.size(); i++)
        {
            if (str[i] == str[i - 1])
            {
                cnt++;
            }
            else
            {
                cnt = 1;
            }
            mx = max(mx, cnt);
        }
        cout << mx << endl;
    }
    return 0;
}