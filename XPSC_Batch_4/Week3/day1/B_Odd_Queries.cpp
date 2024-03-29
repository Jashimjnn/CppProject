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
        vector<ll> v(n + 1, 0);
        vector<ll> H(n + 1);
        ll total = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];
            H[i] = H[i - 1] + v[i];
            total += v[i];
        }
        while (q--)
        {
            ll l, r, k;
            cin >> l >> r >> k;
            ll sum = total - (H[r] - H[l - 1]) + ((r - (l - 1)) * k);
            if (sum % 2 == 0)
            {
                N;
            }
            else
            {
                Y;
            }
        }
    }
    return 0;
}