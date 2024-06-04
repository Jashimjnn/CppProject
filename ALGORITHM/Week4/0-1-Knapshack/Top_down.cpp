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
ll dp[1005][1005];
ll knapshack(ll n, ll weight[],ll value[], ll w)
{
    if (n == 0 || w == 0)
    {
        return 0;
    }
    if (dp[n][w] != -1)
    {
        return dp[n][w];
    }
    if (weight[n - 1] <= w)
    {
        ll op1 = knapshack(n - 1, weight, value, w - weight[n - 1])+ value[n - 1];
        ll op2 = knapshack(n - 1, weight, value, w);
        return dp[n][w] = max(op1, op2);
    }
    else
    {
        ll op2 = knapshack(n - 1, weight, value, w);
        return dp[n][w] = op2;
    }
}
int main()
{
    ll n, w;
    cin >> n >> w;
    ll weight[n], value[n];
    for (int i = 0; i < n; i++)
    {
        cin>>weight[i]>>value[i];
    }
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= w; j++)
        {
            dp[i][j] = -1;
        }
    }
    cout << knapshack(n, weight, value, w) << endl;
    return 0;
}