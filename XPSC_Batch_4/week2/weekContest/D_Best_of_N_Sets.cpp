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
        ll x, y;
        cin >> x >> y;
        if (x > y)
        {
            ll ans = (x + y + ((x - y) - 1));
            cout << ans << endl;
        }
        else
        {
            ll ans = (x + y + ((y - x) - 1));
            cout << ans << endl;
        }
    }
    return 0;
}