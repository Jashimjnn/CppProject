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
        ll n,m,h;
        cin>>n>>m>>h;
        vector<ll>v(n),v1(m);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        for(int i=0;i<m;i++)
        {
            cin>>v1[i];
        }
        sort(v.rbegin(),v.rend());
        sort(v1.rbegin(),v1.rend());
        ll ans = 0;
        for(int i=0;i<min(n,m);i++)
        {
          ll cnt = min(v[i],v1[i]*h);
          ans+=cnt;
        }
        cout<<ans<<endl;
    }
    return 0;
}