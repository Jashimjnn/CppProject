#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    string str,str1;
    cin>>str>>str1;
    string str2,str3;
    cin>>str2>>str3;
    if(str1==str3)
    {
        cout<<"ARE Brothers"<<endl;
    }
    else
    {
        cout<<"NOT"<<endl;
    }
    return 0;
}