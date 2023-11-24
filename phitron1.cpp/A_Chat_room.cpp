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
    string str1="hello";
    int x=0,y=0;
    for(int i=0;i<str.size();i++)
    {
        if(str[i]==str1[x])
        {
            x++;
            y++;
        }
    }
    if(y==5)
    {
        Y;
    }
    else
    {
        N;
    }
    
    return 0;
}