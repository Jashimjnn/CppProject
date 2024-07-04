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
    ll n,x;
    cin>>n>>x;
    vector<ll>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    ll l=0,r=n-1;
    bool flag = false;
    ll idx = -1;
    while(l<=r)
    {
        ll md = (l+r)/2;
        if(v[md]==x)
        {
            flag = true;
            idx = md;
            break;
        }
        else if(v[md]>x)
        {
            r = md-1;
        }
        else
        {
            l = md+1;
        }
    }
    if(flag)
    {
        cout<<idx<<endl;
    }
    else
    {
        N;
    }
    return 0;
}