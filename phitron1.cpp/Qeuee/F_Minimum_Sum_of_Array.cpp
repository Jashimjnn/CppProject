#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    map<int, int> mp;
    int mx = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        mp[v[i]] = v[i];
        mx = max(mx, v[i]);
    }
    if (mp[1])
    {
        cout << n << endl;
        return;
    }

    for (auto u : v)
    {
        for (int j = u + u; j <= mx; j += u)
        {
            mp[j] = min(mp[j], u);
        }
    }
    int ans = 0LL;
    for (int i = 0; i < n; i++)
    {
        ans += mp[v[i]];
    }

    cout << ans << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int __ = 1;
    cin >> __;
    while (__--)
    {
        solve();
    }
}
