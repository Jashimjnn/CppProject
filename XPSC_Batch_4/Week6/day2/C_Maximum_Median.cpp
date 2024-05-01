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

    ll n, k;
    cin >> n >> k;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    auto flag = [&](ll m)
    {
        ll cnt = 0;
        for (int i = (n / 2); i < n; i++)
        {
            cnt += (v[i] < m ? (m - v[i]) : 0);
        }
        return cnt <= k;
    };

    ll left = 1, right = 2e9, mid, ans = 0;
    while (left <= right)
    {
        mid = left + (right - left) / 2;
        if (flag(mid))
        {
            ans = mid;
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    cout << ans << endl;

    return 0;
}