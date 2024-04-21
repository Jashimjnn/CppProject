#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    ll n, l, r, x;
    cin >> n >> l >> r >> x;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    ll ans = 0;
    for (int i = 0; i < (1 << n); ++i)
    {
        ll cnt = 0;
        ll mn = LLONG_MAX;
        ll mx = LLONG_MIN;
        ll sum = 0;
        for (int j = 0; j < n; ++j)
        {
            if (i & (1 << j))
            {
                cnt++;
                mn = min(mn, v[j]);
                mx = max(mx, v[j]);
                sum += v[j];
            }
        }
        if (cnt >= 2 && sum >= l && sum <= r && mx - mn >= x)
        {
            ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}