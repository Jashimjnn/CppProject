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
        ll ans;
        bool flag = false;
        vector<ll>v1;
        for(int i=0;i<n;i++)
        {
            if(mp[v[i]]>=3)
            {
                ans = v[i];
                v1.push_back(v[i]);
            }
        }
        sort(v1.begin(),v1.end());
        ll sz = v1.size();
        if(sz!=0)
        {
            cout<<v1[sz-1]<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }

    }
    return 0;
}