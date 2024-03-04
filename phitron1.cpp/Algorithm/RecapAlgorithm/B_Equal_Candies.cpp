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
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        ll mn = *min_element(v.begin(),v.end());
        for(int i=0;i<n;i++)
        {
            v[i]-=mn;
        }
        ll sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=v[i];
        }
        cout<<sum<<endl;
    }
    return 0;
}