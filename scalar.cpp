#include<iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        ll n;
        cin>>n;
        vector<ll>v(n);
        vector<ll>v1(n);
        vector<ll>v2(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>v1[i];
        }
        ll ans = 0,mx=0;
        sort(v.begin(),v.end());
        sort(v1.rbegin(),v1.rend());
        for(int i=0;i<n;i++)
        {
            //for(int j=0;j<n;j++)
            //{
             //v2[i] = 
             ans+=(v[i]*v1[i]);
             //mx = min(mx,ans);
           // }
            
        }
        
        cout<<"Case #"<<i<<": "<<ans<<endl;
    }
}