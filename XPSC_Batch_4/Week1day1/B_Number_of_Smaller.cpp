#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    ll n,m;
    cin>>n>>m;
    vector<ll>v(n),v1(m);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    for(int i=0;i<m;i++)
    {
        cin>>v1[i];
    }
    ll l=0,r=0,ans=0;
    while(r<m)
    {
        while(v1[r]>v[l])
        {
            ans++;
            l++;
        }
        r++;
        cout<<ans<<" ";
    }
    cout<<endl;
    return 0;
}