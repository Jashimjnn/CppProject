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
    for(ll i=0;i<n;i++)
    {
        cin>>v[i];
    }
    const ll x = 1e6+2;
    vector<ll> idx(x, -1);
    ll minidx = LLONG_MAX;
    for(ll i=0;i<n;i++)
    {
        if(idx[v[i]]!=-1)
        {
            minidx = min(minidx,idx[v[i]]);
        }
        else
        {
            idx[v[i]] = i;
        }
    }
    if(minidx==LLONG_MAX)
    {
        cout<<-1<<endl;
    }
    else
    {
        cout<<minidx+1<<endl;
    }
    return 0;
}