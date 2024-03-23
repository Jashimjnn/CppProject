#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
const ll m=1e9+7;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        vector<ll>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            //sum1+=v[i];
        }
        ll sum=0;
        ll mx = INT_MIN;
        for(int i=0;i<n;i++)
        {
            sum+=v[i];
            mx = max(mx,sum);
            if(sum<0)
            {
                sum=0;
            }
        }
        sum = mx;
        ll sum1=accumulate(v.begin(),v.end(),(ll)0);
        while(k--)
        {
            if(sum>0)
            {
                sum1+=sum;
                sum = 2*sum;
            }
        }
        ll m=1000000007;
        if(sum1>0)
        {
            cout<<(sum1%m)<<endl;
        }
        else
        {
            cout<<(sum1)<<endl;
        }
    }
    return 0;
}