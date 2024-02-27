#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int dp[1005][1005];
int subset_sum(int n, vector<int> &v, int s)
{
    if (n == 0)
    {
        if (s == 0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    if(dp[n][s]!=-1)
    {
        return true;
    }
    if (v[n - 1] <= s)
    {
        int op1 = subset_sum(n - 1, v, s - v[n - 1]);
        int op2 = subset_sum(n - 1, v, s);

        return dp[n][s] = op1 + op2;
    }
    else
    {
        return dp[n][s] = subset_sum(n - 1, v, s);
    }
}
int main()
{
    int n,sum;
    cin >> n>>sum;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=sum;j++)
        {
            dp[i][j]=-1;
        }
    }
    cout<<subset_sum(n,v,sum)<<endl;
    return 0;
}