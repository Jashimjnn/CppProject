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

bool isPalindrome(string str)
{
    string tmp = str;
    reverse(tmp.begin(), tmp.end());
    if (tmp == str)
    {
        return true;
    }
    return false;
}
void solve(vector<vector<string>> &ans, vector<string> &temp, string s)
{
    if (s.size() == 0)
    {
        ans.push_back(temp);
        return;
    }
    for (int j = 0; j < s.size(); j++)
    {
        string str = s.substr(0, j + 1);
        if (isPalindrome(str))
        {
            temp.push_back(str);
            solve(ans, temp, s.substr(j + 1));
            temp.pop_back();
        }
    }
}
int main()
{
    string s;
    cin >> s;
    vector<vector<string>> ans;
    vector<string> temp;
    solve(ans, temp, s);
    for (auto vec : ans)
    {
        for (auto str : vec)
        {
            cout << str << " ";
        }
        cout << endl;
    }
    return 0;
}