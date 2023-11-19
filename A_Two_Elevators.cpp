#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int ans1 = abs(a-1);
        int ans2 = abs(b-c)+abs(c-1);
        if(ans1<ans2)
        {
            cout<<1<<endl;
        }
        else if(ans1>ans2)
        {
            cout<<2<<endl;
        }
        else
        {
            cout<<3<<endl;
        }
    }
}