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
        ll n,m,k;
        cin>>n>>m>>k;
        vector<ll>v(n),v1(m);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        for(int i=0;i<m;i++)
        {
            cin>>v1[i];
        }
        ll cnt=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if((v[i]+v1[j])<=k)
                {
                    cnt++;
                }
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}