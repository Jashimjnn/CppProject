#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    string str;
    cin>>str;
    int len = str.length();
    int hy=0;
    for(int i=0;i<len;i++)
    {
        if(str[i]=='-')
        {
            hy++;
        }
    }
    if(hy==1)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
}