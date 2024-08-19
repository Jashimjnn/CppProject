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
        bool found = false;

        for (ll i = 1; i < str.length(); i++)
        {
            if (str[i] != '0' && stoi(str.substr(0, i)) < stoi(str.substr(i)))
            {
                cout << str.substr(0, i) << " " << str.substr(i) << endl;
                found = true;
                break;
            }
        }

        if (found == false)
        {
            cout << -1 << endl;
        }
    }
    return 0;
}