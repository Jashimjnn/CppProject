#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int dp[1005][1005];
int Lcs(string a, int n, string b, int m)
{
    if (n == 0 || m == 0)
    {
        return 0;
    }
    if (dp[n][m] != -1)
    {
        return dp[n][m];
    }
    if (a[n - 1] == b[m - 1])
    {
        int ans = Lcs(a, n - 1, b, m - 1);
        return dp[n][m] = ans + 1;
    }
    else
    {
        int ans1 = Lcs(a, n - 1, b, m);
        int ans2 = Lcs(a, n, b, m - 1);
        return dp[n][m] = max(ans1, ans2);
    }
}
int main()
{
    string a, b;
    cin >> a >> b;
    memset(dp,-1,sizeof(dp));
    cout << Lcs(a, a.size(), b, b.size()) << endl;
    return 0;
}