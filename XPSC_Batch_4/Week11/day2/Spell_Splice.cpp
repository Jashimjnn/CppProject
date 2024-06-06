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
        ll n;
        cin>>n;
        vector<ll>v(n),v1(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i]>>v1[i];
        }
        ll cnt;
        ll mx = LLONG_MIN;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                ll x = v[i];
                ll y= v1[i];
                ll p = v[j];
                ll q = v1[j];
                ll cnt = y*p+x*q;
                mx = max(mx,cnt);
            }
        }
        cout<<mx<<endl;
    }
    return 0;
}