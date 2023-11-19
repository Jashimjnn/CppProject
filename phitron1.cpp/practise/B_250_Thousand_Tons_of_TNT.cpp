#include <bits/stdc++.h>
#include<iostream>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll>v(150000);
        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];
            v[i] += v[i - 1];
        }
         ll ans=0;
        for (int i = 1; i < n; i++)
            if (n % i == 0)
            {
                ll max1 = 0;
                ll min1 = 1e18;
                for (int j = i; j <= n; j += i)
                {
                    max1 = max(max1, v[j] - v[j - i]);
                    min1 = min(min1, v[j] - v[j - i]);
                }
                if (ans < max1 - min1)
                    ans = max1 - min1;
            }
        cout << ans << "\n";
    }
}