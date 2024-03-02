#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> weight(n);
        for (int i = 0; i < n; i++)
        {
            cin >> weight[i];
        }
        if (m != 1000)
        {
            int sum = 1000 - m;
            bool dp[n + 1][sum + 1];
            dp[0][0] = true;
            for (int i = 1; i <= sum; i++)
            {
                dp[0][i] = false;
            }
            for (int i = 1; i <= n; i++)
            {
                for (int j = 0; j <= sum; j++)
                {
                    if (weight[i - 1] <= j)
                    {
                        dp[i][j] = dp[i - 1][j - weight[i - 1]] || dp[i - 1][j];
                    }
                    else
                    {
                        dp[i][j] = dp[i - 1][j];
                    }
                }
            }
            if (dp[n][sum])
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}