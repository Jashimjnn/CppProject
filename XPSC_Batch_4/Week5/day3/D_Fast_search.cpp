#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    ll n;
    cin>>n;
    vector<ll>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    ll k;
    cin>>k;
    while(k--)
    {
        ll left,right;
        cin>>left>>right;
        ll x = lower_bound(v.begin(),v.end(),left)-v.begin();
        ll y = upper_bound(v.begin(),v.end(),right)-v.begin();
        cout<<y-x<<" ";
    }
    return 0;
}