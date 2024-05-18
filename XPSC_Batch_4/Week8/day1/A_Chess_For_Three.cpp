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
        ll a, b, c;
        cin >> a >> b >> c;
        if (a == 0 and b == 0 and c == 0)
        {
            cout << 0 << endl;
            continue;
        }
        else if (a == b and b == c)
        {
            cout << -1 << endl;
            continue;
        }
        ll ans;
        if ((a + b) > c)
        {
            ans = c;
            ans += ((a + b) - c) / 2;
        }
        else
        {
            ans = (a + b);
        }
        cout << ans << endl;
    }
    return 0;
}
