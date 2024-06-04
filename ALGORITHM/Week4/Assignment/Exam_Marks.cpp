#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        if (m == 1000)
        {
            cout << "YES" << endl;
        }
        else
        {
            ll s = 1000 - m;
            bool dp[n + 1][s + 1];
            dp[0][0] = true;
            for (int i = 1; i <= s; i++)
            {
                dp[0][i] = false;
            }
            for (int i = 1; i <= n; i++)
            {
                for (int j = 0; j <= s; j++)
                {
                    if (v[i - 1] <= j)
                    {
                        bool op1 = dp[i - 1][j - v[i - 1]];
                        bool op2 = dp[i - 1][j];
                        dp[i][j] = op1 || op2;
                    }
                    else
                    {
                        dp[i][j] = dp[i - 1][j];
                    }
                }
            }
            if (dp[n][s])
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}