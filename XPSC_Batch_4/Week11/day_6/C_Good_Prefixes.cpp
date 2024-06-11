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
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        if(n==1)
        {
            if(v[0]==0)
            {
                cout<<1<<endl;
            }
            else
            {
                cout<<0<<endl;
            }
            continue;
        }
        vector<ll> pre(n);
        pre[0] = v[0];
        for (int i = 1; i < n; i++)
        {
            pre[i] = v[i] + pre[i - 1];
        }
        ll cnt = 0;
        vector<ll>v1;
        ll mx = LLONG_MIN;
        for (int i = 0; i < n; i++)
        {
            mx = max(mx,v[i]);
            if(pre[i]-mx==mx)
            {
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}