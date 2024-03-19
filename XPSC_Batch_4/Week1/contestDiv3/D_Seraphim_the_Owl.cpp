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
        vector<ll> v(n), v1(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> v1[i];
        }
        ll sum = 0;
        ll ans = LLONG_MAX;
        for (int i = n - 1; i >= 0; i--)
        {
            if ((i + 1 <= m))
            {
                ans = min(ans, (sum + v[i]));
            }
            sum += min(v[i], v1[i]);
        }
        cout << ans << endl;
    }
    return 0;
}