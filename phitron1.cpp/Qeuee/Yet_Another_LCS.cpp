#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
     int n, m, k;
    cin >> n >> m >> k;

    string s1, s2;
    cin >> s1 >> s2;

    // Initialize a 2D vector to store the length of LCS
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));

    // Dynamic programming to calculate LCS
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            if (s1[i - 1] == s2[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            } else {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }

    // Calculate the maximum LCS after doing the operations optimally
    int maxLCS = dp[n][m] + min(k, min(n, m));

    cout << maxLCS << endl;
    return 0;
}