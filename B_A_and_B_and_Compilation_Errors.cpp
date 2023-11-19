#include<iostream>
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;
int main()
{
    int n;
    cin>>n;
    vector<ll>v(n);
    vector<ll>v1(n-1);
    vector<ll>v2(n-2);
    ll x=0,y=0,z=0;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        x+=v[i];
    }
    for(int i=0;i<n-1;i++)
    {
        cin>>v1[i];
        y+=v1[i];
    }
    for(int i=0;i<n-2;i++)
    {
        cin>>v2[i];
        z+=v2[i];
    }
    ll ans1=x-y;
    ll ans2=y-z;
    cout<<ans1<<endl;
    cout<<ans2<<endl;
}