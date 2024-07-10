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

const ll maxN = 1000;
const ll maxW = 1000;
ll dp[maxN][maxW];
ll knapshack(ll n, vector<ll> &v, vector<ll> &v1, ll w)
{
    if (n == 0 || w == 0)
    {
        return 0;
    }
    if (dp[n][w] != -1)
    {
        return dp[n][w];
    }
    if (v[n - 1] <= w)
    {
        ll op1 = knapshack(n - 1, v, v1, w - v[n - 1]) + v1[n - 1];
        ll op2 = knapshack(n - 1, v, v1, w);
        return dp[n][w] = max(op1, op2);
    }
    else
    {
        ll op2 = knapshack(n - 1, v, v1, w);
        return dp[n][w] = op2;
    }
}
int main()
{
    ll n, w;
    cin >> n >> w;
    vector<ll> v(n), v1(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i] >> v1[i];
    }
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= w; j++)
        {
            dp[i][j] = -1;
        }
    }
    cout << knapshack(n, v, v1, w) << endl;
    return 0;
}