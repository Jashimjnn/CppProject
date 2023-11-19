#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,n;
        cin>>x>>n;
        int ar[x];
        int odd=0,even=0;
        for(int i=1;i<=x;i++)
        {
            cin>>ar[i];
            if(ar[i]%2==0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
        int ans = min(even,n-1);
        int an = n-ans;
        if(an%2==0)
        {
            an++;
        }
       
        if(odd >= an && an <= n)
        {
            cout<<"Yes"<<endl;;
        }
        else 
        {
            cout<<"No"<<endl;;
        }
    }
}