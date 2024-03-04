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
        ll sum=0;
        vector<ll>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            sum+=v[i];
        }
        ll x = sum/n;
        ll cnt=0;
        for(int i=0;i<n;i++)
        {
            if(v[i]>x)
            {
                cnt+=(v[i]-x);
                v[i]=x;
            }
            else
            {
                ll nd = (x-v[i]);
                if(cnt>=nd)
                {
                    v[i]=x;
                    cnt-=nd;
                }
            }
        }
        bool flag = true;
        for(int i=0;i<n;i++)
        {
            if(v[i]!=x)
            {
                flag=false;
            }
        }
        if(flag==true)
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