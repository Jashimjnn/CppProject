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
        ll n,c;
        cin>>n>>c;
        vector<ll>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        map<ll,ll>mp;
        for(int i=0;i<n;i++)
        {
            mp[v[i]]++;
        }
        ll ans=0;
        for(int i=1;i<=100;i++)
        {
            ans+=min(mp[i],c);
        }
        cout<<ans<<endl;
    }
    return 0;
}