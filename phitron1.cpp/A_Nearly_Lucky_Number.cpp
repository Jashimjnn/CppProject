#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    string str;
    cin>>str;
    bool flag=false;
    ll cnt=0;
    for(int i=0;i<str.size();i++)
    {
        if(str[i]=='4' || str[i]=='7')
        {
            cnt++;
        } 
    }
    string s = to_string(cnt);
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!='4' && s[i]!='7')
        {
            N;return 0;
        }
    }
    Y;
    return 0;
}