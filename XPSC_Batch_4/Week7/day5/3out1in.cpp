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
        ll n,q;
        cin>>n>>q;
        vector<ll>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        vector<ll>v1;
        while(q--)
        {
            ll i,j,k;
            cin>>i>>j>>k;
            //ll x = (v[i-1]+v[j-1]-v[k-1]);
            //cout<<x<<" ";
            //v1.push_back(x);
            cout<<i<<" "<<j<<" "<<k<<endl;        
        }
        // for(auto x:v1)
        // {
        //     cout<<x<<" ";
        // }
        // cout<<endl;
    }
    return 0;
}