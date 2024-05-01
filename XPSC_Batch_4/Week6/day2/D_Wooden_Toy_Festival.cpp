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
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        ll ans;
        auto fun = [&](ll x) -> bool
        {
            int cnt = 1;
            for (int l = 0, r = l + 1; r < n;)
            {
                if (v[l] + x + x >= v[r])
                {
                    r++;
                }
                else
                {
                    cnt++;
                    l = r;
                    r = l;
                }
            }
            return (cnt < 4);
        };

        ll left = 0, right = 1e17;

        while (left <= right)
        {
            ll mid = left + (right - left) / 2LL;

            if (fun(mid))
            {
                ans = mid;
                right = mid - 1LL;
            }
            else
            {
                left = mid + 1LL;
            }
        }

        cout << ans << endl;
    }
    return 0;
}