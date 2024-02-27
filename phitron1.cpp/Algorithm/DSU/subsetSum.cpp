#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
bool dp[1005][1005];
bool subset_sum(int n, vector<int> &v, int s)
{
    if (n == 0)
    {
        if (s == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    if(dp[n][s]!=-1)
    {
        return true;
    }
    if (v[n - 1] <= s)
    {
        bool op1 = subset_sum(n - 1, v, s - v[n - 1]);
        bool op2 = subset_sum(n - 1, v, s);

        return dp[n][s] = op1 || op2;
    }
    else
    {
        return dp[n][s] = subset_sum(n - 1, v, s);
    }
}
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int sum;
    cin >> sum;
    if(subset_sum(n,v,sum))
    {
       Y;
    }
    else
    {
        N;
    }
    return 0;
}