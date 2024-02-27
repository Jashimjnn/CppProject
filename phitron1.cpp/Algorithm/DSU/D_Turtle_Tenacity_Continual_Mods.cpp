#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
map<ll,ll>mp;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        mp.clear();
        vector<ll> v(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        ll ans=0;
        for(int i=0;i<n;i++)
        {
            ans = __gcd(ans,v[i]);
            mp[v[i]]++;
        }
        if(mp[ans]>=2)
        {
            N;
        }
        else
        {
            Y;
        }
        
    }
    return 0;
}