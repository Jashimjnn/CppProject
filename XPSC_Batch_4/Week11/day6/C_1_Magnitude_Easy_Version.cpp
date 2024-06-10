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
        auto it = all_of(v.begin(), v.end(), [](ll i)
                         { return i < 0; });
        if (it == true)
        {
            ll sum = 0;
            for (int i = 0; i < n; i++)
            {
                sum += abs(v[i]);
            }
            cout<<sum<<endl;
            continue;
        }
        auto it1 = all_of(v.begin(), v.end(), [](ll x)
                          { return x >= 0; });
        if (it1 == true)
        {
            ll sum1 = 0;
            for (int i = 0; i < n; i++)
            {
                sum1 += v[i];
            }
            cout<<sum1<<endl;
            continue;
        }
        ll k=0;
        ll tmp=0;
        for(int i=0;i<n;i++)
        {
            tmp+=v[i];
            k = max(abs(tmp),abs(k+v[i]));
        }
        cout<<k<<endl;
    }
    return 0;
}