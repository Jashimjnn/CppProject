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
        vector<ll> v(n), v1(n + 1);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        for (int i = 0; i <= n; i++)
        {
            cin >> v1[i];
        }
        ll cnt = 0, mi = LLONG_MAX, mx = LLONG_MAX;
        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            cnt += abs(v[i] - v1[i]);
            if ((v1[n] <= v1[i] && v1[n] >= v[i]) || (v1[n] >= v1[i] && v1[n] <= v[i]))
            {
                flag = false;
            }

            mi = min(abs(v[i] - v1[n]), mi);

            mx = min(abs(v1[i] - v1[n]), mx);
        }
        if (flag==true)
        {
            cnt += min(mi, mx);
            cnt++;
        }
        else
        {
            cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}