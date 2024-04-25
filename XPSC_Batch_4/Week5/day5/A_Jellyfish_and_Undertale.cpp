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
        ll a,b,n;
        cin>>a>>b>>n;
        vector<ll>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        ll sum=0;
        for(int i=0;i<n;i++)
        {
            ll flag = min(a-1,v[i]);
            sum+=flag;
        }
        cout<<sum+b<<endl;
    }
    return 0;
}