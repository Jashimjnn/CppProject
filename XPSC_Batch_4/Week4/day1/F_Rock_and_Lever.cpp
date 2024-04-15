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
        ll cnt = 0;
        for (ll i = 30; i >= 0; i--)
        {
            ll ans = 0;
            for (ll j = 0; j < n; j++)
            {
                if (v[j] >= pow(2, i) && v[j] < pow(2, (i + 1)))
                {
                    ans++;
                }
            }
            cnt += (ans * (ans - 1)) / 2;
        }
        cout << cnt << endl;
    }
    return 0;
}