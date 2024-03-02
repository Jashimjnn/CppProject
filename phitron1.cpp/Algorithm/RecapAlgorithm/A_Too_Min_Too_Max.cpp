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
        vector<ll>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        ll i,j,k,l;
        i=0,j=n-1,k=1,l=n-2;
        ll ans = abs(v[i]-v[j])+abs(v[j]-v[k])+abs(v[k]-v[l])+abs(v[l]-v[i]);
        cout<<ans<<endl;
    }
    return 0;
}