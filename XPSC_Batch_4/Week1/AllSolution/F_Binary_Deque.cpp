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
        ll n,s;
        cin>>n>>s;
        vector<ll>v(n);
        ll sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            sum+=v[i];
        }
        if(sum<s)
        {
            cout<<-1<<endl;
        }
        else if(sum==s)
        {
            cout<<0<<endl;
        }
        else
        {
            cout<<sum-s<<endl;
        }
    }
    return 0;
}