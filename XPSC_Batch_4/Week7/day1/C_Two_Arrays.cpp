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
        vector<ll>v(n),v1(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>v1[i];
        }
        sort(v.begin(),v.end());
        sort(v1.begin(),v1.end());
        for(int i=0;i<n;i++)
        {
            if(v[i]==v1[i])
            {
                continue;
            }
            else
            {
                v[i]+=1;
            }
        }
        bool flag = true;
        for(int i=0;i<n;i++)
        {
            if(v[i]!=v1[i])
            {
                flag=false;
                break;
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