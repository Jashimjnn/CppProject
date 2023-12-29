#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> v(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        ll sum = 1;
        ll mn=INT_MAX;
        ll k;
        for(ll i=0;i<n;i++)
        {
            if(mn>v[i])
            {
                mn=v[i];
                k=i;
            }
        }
        v[k]+=1;
        for(ll i=0;i<n;i++)
        {
            sum*=v[i];
        }
        cout<<sum<<endl;
    }
    return 0;
}