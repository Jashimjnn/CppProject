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
        ll mx=0;
        for(ll i=0;i<n;i++)
        {
            cin>>v[i];
            mp[v[i]]++;
            mx=max(mx,mp[v[i]]);
        }
        ll cnt=mx;
        ll ans = 0;
        while(cnt<n)
        {
            ans++;
            ll x = n-cnt;
            if(x>cnt)
            {
                ans+=cnt;
                cnt+=cnt;
            }
            else
            {
                ans+=x;
                cnt+=x;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}