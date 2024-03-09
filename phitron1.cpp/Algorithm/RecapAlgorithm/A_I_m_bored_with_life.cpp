#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
// ll fun(ll n)
// {
//     if(n==0 || n==1)
//     {
//         return 1;
//     }
//     return fun(n-1)*n;
// }
int main()
{
    ll a,b;
    cin>>a>>b;
    // ll x = fun(a);
    // ll y = fun(b);
    // ll ans = __gcd(x,y);
    ll ans = 1;
    for(int i=1;i<=min(a,b);i++)
    {
        ans*=i;
    }
    cout<<ans<<endl;
    return 0;
}