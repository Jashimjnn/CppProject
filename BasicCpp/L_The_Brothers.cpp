#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    string str1,str2;
    cin>>str1>>str2;
    string s,s1;
    cin>>s>>s1;
    if(str2==s1)
    {
        cout<<"ARE Brothers"<<endl;
    }
    else
    {
        cout<<"NOT"<<endl;
    }
    return 0;
}