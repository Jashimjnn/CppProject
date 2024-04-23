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
        ll n,k,l;
        cin>>n>>k>>l;
        vector<ll>v;
        for(int i=0;i<n;i++)
        {
            ll m,x;
            cin>>m>>x;
            if(x==l)
            {
                v.push_back(m);
            }
        }
        sort(v.begin(),v.end());
        ll sum=0,flag=0;
        for(auto va:v)
        {
            if(flag>=v.size()-k)
            {
                sum+=va;
            }
            flag++;
        }
        if(sum!=0)
        {
            cout<<sum<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
    }
    return 0;
}