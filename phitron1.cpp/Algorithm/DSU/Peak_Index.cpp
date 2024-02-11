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
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        vector<ll> pre(n + 1, 0);
        for (ll i = 0; i < n; i++)
        {
            pre[i + 1] = pre[i] + v[i];
        }
        ll cnt = 0;
        for (ll i = 1; i < n-1; i++)
        {
            ll left = pre[i];
            ll right = pre[n] - pre[i + 1];
            if (left == right)
            {
                cnt++;
            }
        }
        cout << cnt << endl;
    }

    return 0;
}
