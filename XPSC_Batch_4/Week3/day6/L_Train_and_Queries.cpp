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
        ll n,k;
        cin>>n>>k;
        vector<ll>v(n);
        map<ll,vector<ll>>mp;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        for(int i=0;i<n;i++)
        {
            mp[v[i]].push_back(i);
        }
        while(k--)
        {
            ll a,b;
            cin>>a>>b;
            if(mp[a].empty() || mp[b].empty())
            {
                N;
                continue;
            }
            if(a==b)
            {
                Y;
                continue;
            }
            if(mp[a].front()<mp[b].back())
            {
                Y;
            }
            else
            {
                N;
            }
        }
    }
    return 0;
}