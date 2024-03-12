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
        for(int i=0;i<n-2;i++)
        {
            v[i+1] = v[i+1]-2*abs(v[i]);
            v[i+2] = v[i+2]-v[i];
            v[i]=0;
        }
        ll cnt=0;
        for(int i=0;i<n;i++)
        {
            if(v[i]==0)
            {
                cnt++;
            }
        }
        if(cnt==n)
        {
            Y;
        }
        else
        {
            N;
        }
    }
    return 0;
}