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
        sort(v.begin(),v.end());
        ll sum=0;
        for(int i=0;i<n-1;i++)
        {
            sum+=(v[i]-v[i+1]);
        }
        cout<<abs(sum)<<endl;
    }
    return 0;
}