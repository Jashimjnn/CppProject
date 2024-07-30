/**
 *    author:  Mohammad Jashim Uddin
 **/
#include <iostream>
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define yy cout << "Yes" << endl;
#define N cout << "NO" << endl;
#define nn cout << "No" << endl;
#define one cout << "1" << endl;
#define onee cout << "-1" << endl;
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m, k;
        cin >> n >> m >> k;
        string s;
        cin >> s;
        vector<ll> dp(n + 2, -1);
        dp[0] = k;
        for (int i = 1; i <= n + 1; i++)
        {
            if (i != n + 1 && s[i - 1] == 'C')
            {
                continue;
            }
            for (int t = 1; t <= m; t++)
            {
                if (i - t >= 0 && (i - t == 0 || s[i - t - 1] == 'L'))
                {
                    dp[i] = max(dp[i], dp[i - t]);
                }
            }
            if (i > 1 && s[i - 2] == 'W')
            {
                dp[i] = max(dp[i], dp[i - 1] - 1);
            }
        }
        if (dp[n + 1] >= 0)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}