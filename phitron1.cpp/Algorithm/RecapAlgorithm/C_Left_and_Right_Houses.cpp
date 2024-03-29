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
        ll n;
        cin >> n;
        string str;
        cin >> str;
        vector<ll> pre(n + 1);
        pre[0] = 0;
        for (int i = 0; i < n; i++)
        {
            pre[i+1] = pre[i] + str[i] - '0';
        }
        ll ans = -1;
        for (int i = 0; i <= n; i++)
        {
            ll lft = i - pre[i];
            ll rght = pre[n] - pre[i];
            if ((2 * lft) >= i && (2 * rght) >= n - i)
            {
                if (ans == -1 || abs(n - 2 * i) < abs(n - 2 * ans))
                {
                    ans = i;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}