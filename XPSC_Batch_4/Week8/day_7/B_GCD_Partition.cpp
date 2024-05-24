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
        ll sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            sum+=v[i];
        }
        ll cnt=0;
        ll flag=1;
        for(int i=0;i<n-1;i++)
        {
            cnt+=v[i];
            sum-=v[i];
            flag = max(flag,__gcd(sum,cnt));
        }
        cout<<flag<<endl;
    }
    return 0;
}