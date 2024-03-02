#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int dp[1005][1005];
int Unbounded_Knapsack(int n, int w, int v[], int v1[])
{
    if (n == 0 || w == 0)
    {
        return 0;
    }
    if (dp[n][w] != -1)
    {
        return dp[n][w];
    }
    if (v1[n - 1] <= w)
    {
        int ch1 = v[n - 1] + Unbounded_Knapsack(n, w - v1[n - 1], v, v1);
        int ch2 = Unbounded_Knapsack(n - 1, w, v, v1);
        return dp[n][w] = max(ch1, ch2);
    }
    else
    {
        return dp[n][w] = Unbounded_Knapsack(n - 1, w, v, v1);
    }
}
int main()
{
    int n;
    cin >> n;
    int v[n], v1[n];
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            dp[i][j] = -1;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        v1[i]=i+1;
    }
    cout << Unbounded_Knapsack(n, n, v, v1) << endl;
    return 0;
}