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
    ll sum=0,sum1=0;
    ll mx = LLONG_MIN;
    ll w;
    while(t--)
    {
        ll a,b;
        cin>>a>>b;
        sum+=a;
        sum1+=b;
        ll l = abs(sum-sum1);
        ll p;
        if(sum>sum1)
        {
          p = 1;
        }
        else
        {
            p=2;
        }
        if(l>mx)
        {
            mx = l;
            w = p;
        }
    }
    cout<<w<<" "<<mx<<endl;
    return 0;
}