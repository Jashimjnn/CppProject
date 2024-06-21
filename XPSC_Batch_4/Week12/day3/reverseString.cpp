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
    getline(cin,str);
    stringstream ss(str);
    vector<string>v;
    string word;
    while(ss>>word)
    {
        v.push_back(word);
    }
    reverse(v.begin(),v.end());
    for(string s:v)
    {
        cout<<s<<" ";
    }
    cout<<endl;
    return 0;
}