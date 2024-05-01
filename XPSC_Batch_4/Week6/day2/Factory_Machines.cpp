#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, t;
    cin >> n >> t;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    auto ok = [&](ll m)
    {
        ll total = 0;
        for (ll i = 0; i < n; i++)
        {
            total += (m / a[i]);
            if (total >= t)
            {
                return true;
            }
        }
        return false;
    };

    ll left = 1, right = 1e18, mid, ans;
    while (left <= right)
    {
        mid = left + (right - left) / 2;
        if (ok(mid))
        {
            ans = mid;
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }
    cout << ans << endl;
    return 0;
}