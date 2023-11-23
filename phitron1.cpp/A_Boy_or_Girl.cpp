#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    string str;
    cin >> str;
    
    unordered_set<char>se;
    for(int i=0;i<str.size();i++)
    {
        se.insert(str[i]);
    }
    int ans = se.size();
    if (ans % 2 == 0)
    {
        cout << "CHAT WITH HER!" << endl;
    }
    else
    {
        cout << "IGNORE HIM!" << endl;
    }
    return 0;
}