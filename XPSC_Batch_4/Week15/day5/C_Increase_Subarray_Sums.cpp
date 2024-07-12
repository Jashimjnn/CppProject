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

const ll INF = 1e9;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, x;
        cin >> n >> x;
        vector<ll> dq(n);
        for (int i = 0; i < n; i++)
        {
            cin >> dq[i];
        }
        vector<ll> mx(n + 1, -INF);
        mx[0] = 0;
        for (int l = 0; l < n; l++)
        {
            ll sum = 0;
            for (int r = l; r < n; r++)
            {
                sum += dq[r];
                mx[r - l + 1] = max(mx[r - l + 1], sum);
            }
        }
        vector<ll> dq1(n + 1, 0);
        for (int i = 0; i <= n; i++)
        {
            ll flag = 0;
            for (int j = 0; j <= n; j++)
            {
                flag = max(flag, mx[j] + min(i, j) * x);
            }
            dq1[i] = flag;
        }
        for (int i = 0; i <= n; i++)
        {
            cout << dq1[i] << " ";
        }
        cout << endl;
    }
    return 0;
}