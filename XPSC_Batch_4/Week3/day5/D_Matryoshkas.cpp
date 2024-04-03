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
        map<ll,ll>mp;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            mp[v[i]]++;
        }
        sort(v.begin(),v.end());
        ll cnt=0;
        for(int i=0;i<n;i++)
        {
            ll flag = v[i];
            if(mp[v[i]]!=0)
            {
                cnt++;
                while(mp[flag]>0)
                {
                    mp[flag]--;
                    flag++;
                }
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}