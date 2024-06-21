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
    ll l = 0, r = 0;
    ll cnt = 0;
    ll sum = 0;
    while (r < n)
    {
        sum += v[r];
        if (sum <= m)
        {
            cnt+=(r-l+1);
        }
        else
        {
            while (sum > m && l < r)
            {
                sum -= v[l];
                l++;
            }
            if(sum<=m)
            {
                cnt+=(r-l+1);
            }
        }
        r++;
    }
    cout << cnt << endl;
    return 0;
}