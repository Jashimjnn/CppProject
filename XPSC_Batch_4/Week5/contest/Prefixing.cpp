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
        ll n;
        cin>>n;
        vector<ll>v(n),v1;
        ll mx = LLONG_MIN;
        map<ll,ll>mp;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            mx = max(mx,v[i]);
        }
        for(int i=0;i<n;i++)
        {
            if(mp[v[i]]==0)
            {
                v1.push_back(v[i]);
                mp[v[i]]++;
            }
            else
            {
                v1.push_back(mx);
            }
        }
        for(int i=0;i<v1.size();i++)
        {
            cout<<v1[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}