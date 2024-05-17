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
        ll sum=0;
        if(n<10)
        {
            ll ans = (n*(n+1))/2;
            cout<<ans<<endl;
        }
        else
        {
           ll x = n/9;
           ll y = n%9;
           ll sum = x*45+(y*(y+1))/2;
           cout<<sum<<endl;
        }
    }
    return 0;
}
