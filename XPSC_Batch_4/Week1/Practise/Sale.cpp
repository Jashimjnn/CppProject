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
        ll mx = LLONG_MIN;
        ll idx;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (mx < v[i])
            {
                mx = v[i];
                idx = i;
            }
        }
        ll ans = mx * 2 + (idx);
        cout << ans << endl;
    }
    return 0;
}