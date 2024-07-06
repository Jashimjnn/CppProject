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
        ll n, l, r;
        cin >> n >> l >> r;
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        ll cnt = 0;
        ll lft = 0, rght = 0;
        ll sum = 0;
        while (rght!=(n+1))
        {
            if (sum >= l and sum <= r)
            {
                cnt++;
                sum=0;
                lft = rght;
            }
            else if (sum <l)
            {
                sum+=v[rght];
                rght++;
            }
            else
            {
                sum-=v[lft];
                lft++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}
