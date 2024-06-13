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
        ll n,x,y;
        cin>>n>>x>>y;
        ll v[n];
        ll sum=0;
        for(int i=0;i<n;i++)
        {
           cin>>v[i];
           sum+=v[i];
        }
        ll sum1=0;
        for(int i=0;i<n;i++)
        {
            if(v[i]<y)
            {
                continue;
            }
            else
            {
                sum1+=(v[i]-y);
            }
        }
        ll ans = x+sum1;
        if(ans<sum)
        {
            cout<<"COUPON"<<endl;
        }
        else
        {
            cout<<"NO COUPON"<<endl;
        }
    }
    return 0;
}