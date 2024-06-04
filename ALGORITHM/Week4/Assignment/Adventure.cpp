#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
const ll X = 1000;
ll dp[X][X];
ll fun(ll n, ll v[], ll value[], ll W)
{
    if (n == 0 || W == 0)
    {
        return 0;
    }
    if (dp[n][W] != -1)
    {
        return dp[n][W];
    }
    if (v[n - 1] <= W)
    {
        ll op1 = fun(n - 1, v, value, W - v[n - 1]) + value[n - 1];
        ll op2 = fun(n - 1, v, value, W);
        return dp[n][W] = max(op1, op2);
    }
    else
    {
        ll op2 = fun(n - 1, v, value, W);
        return dp[n][W] = op2;
    }
}
int main()
{

    ll t;
    cin >> t;
    while (t--)
    {
        ll n, W;
        cin >> n >> W;
        ll v[n], value[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        for (ll i = 0; i < n; i++)
        {
            cin >> value[i];
        }
        for (ll i = 0; i <= n; i++)
        {
            for (ll j = 0; j <= W; j++)
            {
                dp[i][j] = -1;
            }
        }
        ll ans = fun(n, v, value, W);
        cout << ans << endl;
    }
    return 0;
}