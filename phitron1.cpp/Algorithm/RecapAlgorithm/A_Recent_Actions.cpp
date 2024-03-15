#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        vector<ll>v(n + m+1);
        ll dp[n+1];
        memset(dp,-1,sizeof(dp));
        ll j = n;
        for (int i = 0; i < m; i++)
        {
            ll x;
            cin >> x;
            if (j > 0 && !v[x])
            {
                dp[j--] = i + 1;
            }
            v[x] = 1;
        }
        for (int i = 1; i <= n; i++)
        {
            cout << dp[i] << " ";
        }
        cout << endl;
    }
    return 0;
}