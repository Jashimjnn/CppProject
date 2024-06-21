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
        ll x,y;
        cin>>x>>y;
        vector<ll>v,v1;
        while(x!=0)
        {
            ll a = x%2;
            v.push_back(a);
            x/=2;
        }
        while(v.size()<32)
        {
            v.push_back(0);
        }
        while(y!=0)
        {
            ll b = y%2;
            v1.push_back(b);
            y/=2;
        }
        while(v1.size()<32)
        {
            v1.push_back(0);
        }
        ll cnt=0;
        for(int i=0;i<32;i++)
        {
            if(v[i]==v1[i])
            {
                cnt++;
            }
            else
            {
                break;
            }
        }
        ll ans = (1ll<<cnt);
        cout<<ans<<endl;
    }
    return 0;
}
