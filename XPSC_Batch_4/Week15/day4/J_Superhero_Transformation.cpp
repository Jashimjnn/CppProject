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

bool isVowel(char c)
{
    unordered_set<char> st = {'a', 'e', 'i', 'o', 'u'};
    return st.find(c) != st.end();
}
int main()
{
    string str, str1;
    cin >> str >> str1;
    if (str.size() != str1.size())
    {
        nn;
    }
    else
    {
        for (int i = 0; i < str.size(); i++)
        {
            if (isVowel(str[i]) != isVowel(str1[i]))
            {
                nn;
                return 0;
            }
        }
        yy;
    }
    return 0;
}