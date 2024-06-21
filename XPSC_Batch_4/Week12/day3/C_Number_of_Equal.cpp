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
    ll n, m;
    cin >> n >> m;
    vector<ll> v(n), v1(m);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> v1[i];
    }
    ll l = 0, r = 0;
    ll ans = 0;
    while(l<n && r<m)
    {
        ll cnt1=0,cnt2=0,cur = v[l];
        while(v[l]==cur && l<n)
        {
            cnt1++;
            l++;
        }
        while(cur>v1[r] && r<m)
        {
            r++;
        }
        while(v1[r]==cur && r<m)
        {
            cnt2++;
            r++;
        }
        ans+=(cnt1*cnt2);
    }
    cout<<ans<<endl;
    return 0;
}