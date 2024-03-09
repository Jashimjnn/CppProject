#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int dp[1005][1005];
const int M = 1e9+7;
int count_subsets(int n, int a[], int s, int d)
{
    if (n == 0)
    {
        if (s == d)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    if (dp[n][s] != -1)
    {
        return dp[n][s];
    }
    int op1 = 0, op2 = 0;
    if (a[n - 1] <= s)
    {
        op1 = count_subsets(n-1, a, s - a[n - 1], d)%M;
        op2 = count_subsets(n - 1, a, s, d)%M;
    }
    else
    {
        op2 = count_subsets(n - 1, a, s, d)%M;
    }
    return dp[n][s] = (op1 + op2);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, d;
        cin >> n>>d;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += a[i];
        }
        int s = (sum + d) / 2;
        memset(dp, -1, sizeof(dp));
        cout << count_subsets(n, a, s, d) << endl;
    }
    return 0;
}
