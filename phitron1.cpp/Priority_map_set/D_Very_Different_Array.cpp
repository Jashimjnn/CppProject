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
        ll n,m;
        cin>>n>>m;
        vector<ll>v(n),v1(m);
        for(ll i=0;i<n;i++)
        {
            cin>>v[i];
        }
        for(ll i=0;i<m;i++)
        {
            cin>>v1[i];
        }
        // sort(v.begin(),v.end());
        // sort(v1.begin(),v1.end());
        // vector<ll>p(n),q(m);
        // p[0]=v[0];
        // for(int i=1;i<n;i++)
        // {
        //     p[i]=v[i]+p[i-1];
        // }
        // q[0]=v1[0];
        // for(int i=1;i<n;i++)
        // {
        //     q[i]=v1[i]+q[i-1];
        // }
        // cout<<(abs(p[n-1]-q[m-1]))<<endl;
        sort(v.begin(), v.end());
        sort(v1.begin(), v1.end(), greater<ll>());

        ll result = 0;
        ll mx = 0;
        for (ll i = 0; i < n; i++) {
            mx += max(mx, (v1[i] - v[i]));
        }

        cout << mx << endl;
    }
    return 0;
}