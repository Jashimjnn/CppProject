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
        ll n,m,k;
        cin>>n>>m>>k;
        vector<ll>v(n),v1(m);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        for(int i=0;i<m;i++)
        {
            cin>>v1[i];
        }
        sort(v.begin(),v.end());
        sort(v1.begin(),v1.end());
        ll j=m-1;
        ll i=0;
        ll cnt=0;
        while(i<n && j>=0)
        {
            ll x = v[i]+v1[j];
            if (x <= k)
            {
                cnt += (j + 1);
                i++;
            }
            else
            {
                j--;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}