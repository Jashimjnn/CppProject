#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        sum += v[i];
    }
    int diff;
    cin >> diff;

    int dp[n + 1][sum + 1];
    dp[0][0] = 1;
    for (int i = 1; i <= sum; i++)
        dp[0][i] = 0; 
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= sum; j++)
        {
            if (v[i - 1] <= j)
                dp[i][j] = dp[i - 1][j - v[i - 1]] + dp[i - 1][j];
            else
                dp[i][j] = dp[i - 1][j];
        }
    }

    
    int count = 0;
    for (int j = 0; j <= sum; j++)
    {
        int s1 = j;
        int s2 = sum - j;
        if (abs(s1 - s2) == diff)
            count += dp[n][j];
    }
    cout << count << endl;
    return 0;
}