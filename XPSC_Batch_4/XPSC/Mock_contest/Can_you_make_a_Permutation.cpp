#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
const ll X = 1e5 + 5;
ll dp[X];
void fun(ll n, vector<ll> &v, ll k)
{
    bool flag = false;
    for (int i = 1; i <= n; i++)
    {
        if (!dp[i])
        {
            flag = true;
            break;
        }
    }
    if (flag == false)
    {
        cout << "YES\n";
    }
    else
    {
        ll cnt = 0;
        for (int i = 1; i <= n; i++)
        {
            if (!dp[i])
            {
                cnt++;
            }
        }
        if (cnt <= k)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        vector<ll> v(n + 1);
        memset(dp, false, sizeof(dp));
        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];
            dp[v[i]] = true;
        }
        fun(n, v, k);
    }
    return 0;
}