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
        vector<ll>v(n);
        ll sum=0;
        for(ll i=0;i<n;i++)
        {
            cin>>v[i];
            sum+=max(abs(v[i]-1),abs(v[i]-m));
        }
        cout<<sum<<endl;
    }
    return 0;
}
