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
        for(auto &x:v)
        {
            cin>>x;
        }
        vector<ll>v1(n),v2(n);
        v1[0]=v[0];
        for(int i=1;i<n;i++)
        {
            v1[i] = max(v[i],v1[i-1]);
        }
        v2[n-1]=v[n-1];
        for(int i=n-2;i>=0;i--)
        {
            v2[i] = max(v[i],v2[i+1]);
        }
        ll sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=(min(v1[i],v2[i]));
        }
        cout<<sum<<endl;
    }
    return 0;
}