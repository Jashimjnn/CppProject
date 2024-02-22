#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    int t;
    cin >> t;

    for (int i = 1; i <= t; ++i)
    {
        int n;
        cin >> n;
        if(n==0)
        {
            cout << "Case " << i << ": " << 0 << endl;
            continue;
        }
        vector<long long> coins(n);
        for (int j = 0; j < n; ++j)
        {
            cin >> coins[j];
        }


        vector<long long> dp(n);
        dp[0] = coins[0];
        dp[1] = max(coins[0], coins[1]);
        for (int j = 2; j < n; ++j)
        {
            dp[j] = max(dp[j - 1], dp[j - 2] + coins[j]);
        }

        cout << "Case " << i << ": " << dp[n - 1] << endl;
    }

    return 0;
}