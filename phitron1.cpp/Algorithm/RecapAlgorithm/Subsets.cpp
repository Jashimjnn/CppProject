#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
const ll M = 1e9 + 7;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, d;
        cin >> n >> d;
        vector<ll> v(n);
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            sum += v[i];
        }
        ll s = (sum + d) / 2;
        ll dp[n + 1][s + 1];
        dp[0][0] = true;
        for (int i = 1; i <= s; i++)
        {
            dp[0][i] = 0;
        }
        for (int i = 1; i <= n; i++)
        {
            for (int j = 0; j <= s; j++)
            {
                dp[i][j] = dp[i - 1][j];
                if (j >= v[i - 1])
                {
                    dp[i][j] = (dp[i][j] + dp[i - 1][j - v[i - 1]]) % M;
                }
            }
        }
        cout << dp[n][s] << endl;
    }
    return 0;
}