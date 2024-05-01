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
        ll n, x;
        cin >> n >> x;
        vector<ll>v(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        ll left = 1;
        ll right = INT_MAX;
        ll sum = INT_MAX;
        ll count;
        while (left <= right)
        {
            ll mid = (right - left) / 2 + left;
            count = 0;
            for (ll &y : v)
            {
                if (mid > y)
                {
                    count += (mid - y);
                }
            }
            if (count <= x)
            {
                sum = mid;
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
        }
        cout << sum << endl;
    }
    return 0;
}