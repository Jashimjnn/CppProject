/**
 *    author:  Mohammad Jashim Uddin
**/
#include <iostream>
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define yy cout << "Yes" << endl;
#define N cout << "NO" << endl;
#define nn cout << "No" << endl;
#define one cout << "1" << endl;
#define onee cout << "-1" << endl;
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,a,b;
        cin>>n>>a>>b;
        auto flag = [&](ll k){
            ll p = k*(k-1)/2;
            ll ans = k*b-p;
            ll mn = (n-k)*a;
            return (ans+mn);
        };
        ll mx = LLONG_MIN;
        ll x = n*a;
        mx = max(mx,x);
        ll y = flag(min(n,b));
        mx = max(mx,y);
        ll mn = b-a;
        if(mn>=0 && mn<=min(n,b))
        {
            ll z = flag(mn);
            mx = max(mx,z);
        }
        cout<<mx<<endl;
    }
    return 0;
}