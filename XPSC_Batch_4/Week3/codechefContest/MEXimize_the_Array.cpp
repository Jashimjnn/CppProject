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
        ll cnt=0;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        for(int i=0;i<n;i++)
        {
            if(v[i]==i)
            {
                continue;
            }
            else if(v[i]>i)
            {
                cnt+=(v[i]-i);
            }
            else
            {
                cnt+=abs(i-v[i]);
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}