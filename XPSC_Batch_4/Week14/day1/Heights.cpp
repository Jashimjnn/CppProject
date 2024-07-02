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
    ll n;
    cin>>n;
    vector<ll>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    vector<ll>pre(n);
    pre[0] = -1;
    ll mx = LLONG_MIN;
    for(int i=1;i<n;i++)
    {
       mx = max(mx,v[i-1]);
       pre[i] = mx;
    }
    vector<ll>suf(n);
    suf[0] = -1;
    ll mx1 = LLONG_MIN;
    for(int i=n-2;i>=0;i--)
    {
       mx1 = max(mx1,v[i+1]);
       suf[i] = mx1;
    }
    suf[n-1] = -1;
    for(int i=0;i<n;i++)
    {
        cout<<pre[i]<<" "<<suf[i]<<endl;
    }
    return 0;
}