#include <bits/stdc++.h>
using namespace std;
const int X = 1000;
int dp[X][X];
int Adweightenture(int n, int weight[], int weight_value[], int W)
{
    if (n == 0 || W == 0)
        return 0;
    if (dp[n][W] != -1)
    {
        return dp[n][W];
    }
    if (weight[n - 1] <= W)
    {
        int op1 = Adweightenture(n - 1, weight, weight_value, W - weight[n - 1]) + weight_value[n - 1];
        int op2 = Adweightenture(n - 1, weight, weight_value, W);
        return dp[n][W] = max(op1, op2);
    }
    else
    {
        int op2 = Adweightenture(n - 1, weight, weight_value, W);
        return dp[n][W] = op2;
    }
}
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, W;
        cin >> n >> W;
        int weight[n], weight_value[n];
        for (int i = 0; i < n; i++)
        {
            cin >> weight[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> weight_value[i];
        }
        memset(dp,-1,sizeof(dp));
        cout << Adweightenture(n, weight, weight_value, W) << endl;
    }
    return 0;
}