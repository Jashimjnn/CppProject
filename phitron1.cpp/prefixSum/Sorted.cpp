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
        vector<ll>v;
        for(int i=0;i<n;i++)
        {
            ll x;
            cin>>x;
            v.push_back(x);
        }
        bool flag=false;
        for(int i=0;i<n-1;i++)
        {
            if(v[i]>v[i+1])
            {
                flag=true;
                break;
            }
        }
        if(flag)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}