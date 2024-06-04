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
    map<ll,ll>mp;
    for(int i=0;i<n;i++)
    {
        ll y,z;
        cin>>y>>z;
        mp[y]++;
        mp[z]--;
    }
    ll mx = LLONG_MIN;
    ll cnt=0;
    for(auto x:mp)
    {
        cnt+=x.second;
        mx = max(mx,cnt);
    }
    cout<<mx<<endl;
    return 0;
}