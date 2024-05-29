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
    ll n,k;
    cin>>n>>k;
    vector<ll>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    pbds<pair<ll,ll>>p;
    vector<ll>v1;
    ll left=0,right=0;
    while(right<n)
    {
        p.insert({v[right],right});
        if((right-left+1)==k)
        {
            ll x = k/2;
            if(k%2==0)
            {
                x--;
            }
            auto it = p.find_by_order(x);
            v1.push_back(it->first);
            p.erase({v[left],left});
            left++;
        }
        right++;
    }
    for(auto x:v1)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}