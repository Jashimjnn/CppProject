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
        ll n, q;
        cin >> n >> q;
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.rbegin(), v.rend());
        vector<ll> pre(n);
        pre[0] = v[0];
        for (int i = 1; i < n; i++)
        {
            pre[i] = v[i] + pre[i - 1];
        }
        while (q--)
        {
            ll x;
            cin >> x;
            ll cnt = -1;
            ll left = 1, right = n;
            while (left <= right)
            {
                ll mid = (left + right) / 2;
                if (pre[mid-1] >= x)
                {
                    cnt = mid;
                    right = mid - 1;
                }
                else
                {
                    left = mid + 1;
                }
            }
            cout << cnt << endl;
        }
    }
    return 0;
}