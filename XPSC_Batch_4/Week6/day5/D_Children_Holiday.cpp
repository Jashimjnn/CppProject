#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    ll m, n;
    cin >> m >> n;
    vector<tuple<ll, ll, ll>> v(n);
    for (ll i = 0; i < n; i++)
    {
        ll t, z, y;
        cin >> t >> z >> y;
        v[i] = make_tuple(t, z, y);
    }
    vector<ll> v1(n);
    auto fun = [&](ll mid)
    {
        vector<ll> v2(n);
        ll flag = m;
        for (ll i = 0; i < n; i++)
        {
            tuple<ll, ll, ll> T = v[i];
            ll a, b, c, sum, x, y, curr;
            a = get<0>(T);
            b = get<1>(T);
            c = get<2>(T);
            sum = ((a * b) + c);
            x = (mid / sum);
            y = mid % sum;
            curr = ((x * b) + min(b, (y / a)));
            curr = min(flag, curr);
            flag -= curr;
            v2[i] = curr;
        }
        if (!flag)
        {
            for (ll i = 0; i < n; i++)
            {
                v1[i] = v2[i];
            }
        }

        return (!flag);
    };

    ll left = 0, right = 1e8, mid, ans;
    while (left <= right)
    {
        mid = left + (right - left) / 2;
        if (fun(mid))
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
    for (auto val : v1)
    {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}