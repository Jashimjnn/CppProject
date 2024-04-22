#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    ll n,l;
    cin>>n>>l;
    vector<ll>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    double mx = LLONG_MIN;
    for(int i=0;i<n-1;i++)
    {
        double x = v[i+1]-v[i];
        mx = max(mx,x);
    }
    double ans = mx/2.0;
    double ans1 = max(v[0]-0,l-v[n-1]);
    ans = max(ans,ans1);
    cout<<fixed<<setprecision(10)<<ans<<endl;
    return 0;
}