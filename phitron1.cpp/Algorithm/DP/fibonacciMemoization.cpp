#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
const ll X = 1e6 + 5;
ll dp[X];
ll fibo(ll n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    if (dp[n] != -1)
    {
        return dp[n];
    }
    ll ans = fibo(n - 1) + fibo(n - 2);
    dp[n] = ans;
    return ans;
}
int main()
{
    ll n;
    cin >> n;
    memset(dp, -1, sizeof(dp));
    cout << fibo(n) << endl;
    return 0;
}