#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        vector<ll>v(n),v1(m);
        for(ll i=0;i<n;i++)
        {
            cin>>v[i];
        }
        for(ll i=0;i<m;i++)
        {
            cin>>v1[i];
        }
        ll mx = *max_element(v1.begin(),v1.end());
        if(mx>=n)
        {
            mx=0;
        }
        else
        {
            mx=n-mx;
        }
        sort(v.begin()+mx,v.end());
        for(auto x:v)
        {
            cout<<x<<" ";
        }
        cout<<endl;
        

    }
    return 0;
}