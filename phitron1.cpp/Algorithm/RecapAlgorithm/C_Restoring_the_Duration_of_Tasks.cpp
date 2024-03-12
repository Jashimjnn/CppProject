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
        vector<ll>v2(n);
        ll flag=0;
        for(int i=0;i<n;i++)
        {
            if(v[i]>=flag)
            {
                v2[i] = v1[i]-v[i];
            }
            else
            {
                v2[i] = v1[i]-flag;
            }
            flag = v1[i];
        }
        for(auto x : v2)
        {
            cout<<x<<" ";
        }
        cout<<endl;
    }
    return 0;
}