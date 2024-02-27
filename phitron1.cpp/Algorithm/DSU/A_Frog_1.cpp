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
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vector<int> dp(n, 0);
    dp[0] = 0;
    dp[1] = abs(v[1] - v[0]);

    for (int i = 2; i < n; i++)
    {
        dp[i] = min(dp[i - 1] + abs(v[i] - v[i - 1]), dp[i - 2] + abs(v[i] - v[i - 2]));
    }
    cout << dp[n - 1]<< endl;
    return 0;
}