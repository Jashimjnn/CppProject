#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            sum += v[i];
        }
        if (sum % 2 == 0)
        {
            int ans = sum / 2;
            vector<bool> dp(ans + 1, false);
            dp[0] = true;
            for (int i = 0; i < n; i++)
            {
                for (int j = ans; j >= v[i]; j--)
                {
                    dp[j] = dp[j] || dp[j - v[i]];
                }
            }
            if (dp[ans])
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}