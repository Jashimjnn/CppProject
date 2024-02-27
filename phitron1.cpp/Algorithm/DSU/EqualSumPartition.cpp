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
    if (sum % 2 == 0)
    {
        int ans = sum / 2;
        bool dp[n + 1][ans + 1];
        dp[0][0] = true;
        for (int i = 1; i <= ans; i++)
        {
            dp[0][i] = false;
        }
        for (int i = 1; i <= n; i++)
        {
            for (int j = 0; j <= ans; j++)
            {
                if (v[i - 1] <= j)
                {
                    dp[i][j] = dp[i - 1][j - v[i - 1]] || dp[i - 1][j];
                }
                else
                {
                    dp[i][j] = dp[i - 1][j];
                }
            }
        }
        if(dp[n][ans])
        {
            Y;
        }
        else
        {
            N;
        }
    }
    else
    {
        N;
    }
    return 0;
}