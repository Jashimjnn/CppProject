#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    ll t, b[100005];
    ll a[100005];
    cin >> t;
    while (t--)
    {
        ll l, n, q;
        cin >> l >> n >> q;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        for (int i = 1; i <= n; i++)
        {
            cin >> b[i];
        }
        while (q--)
        {
            ll x;
            cin >> x;
            int lb = lower_bound(a + 1, a + 1 + n, x) - a - 1;
            int ans = b[lb] + (x - a[lb]) * 1.0 * (b[lb + 1] - b[lb]) / (a[lb + 1] - a[lb]);
            cout << ans << " ";
        }
        cout<<endl;
    }
    return 0;
}