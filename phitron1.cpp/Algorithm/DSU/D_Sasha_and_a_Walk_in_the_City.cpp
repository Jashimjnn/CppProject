#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const int MOD = 998244353;
vector<int> adj[300005];
int dp[300005][2]; // dp[i][0] -> Number of good sets not containing intersection i, dp[i][1] -> Number of good sets containing intersection i

void dfs(int u, int p)
{
    dp[u][0] = dp[u][1] = 1;
    for (int v : adj[u])
    {
        if (v == p)
            continue;
        dfs(v, u);
        dp[u][0] = (1LL * dp[u][0] * (dp[v][0] + dp[v][1])) % MOD;
        dp[u][1] = (1LL * dp[u][1] * dp[v][0]) % MOD;
    }
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        for (int i = 1; i <= n-1; ++i)
        {
            adj[i].clear();
            dp[i][0] = dp[i][1] = 0;
        }

        for (int i = 1; i <= n-1; ++i)
        {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        dfs(1, -1);

        // Output the total number of good sets modulo 998244353
        cout << (dp[1][0] + dp[1][1]) % MOD << endl;
    }

    return 0;
}
