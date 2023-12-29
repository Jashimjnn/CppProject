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
        ll h, a, b;
        cin >> h >> a >> b;
        if (h <= a)
        {
            cout << 1 << endl;
        }
        else if (a > b)
        {
            ll ans = ceil((h - a) * 1.0 / (a - b) * 1.0);
            cout << ans * 2 + 1 << endl;
        }
        else
        {
            cout << "Impossible" << endl;
        }
    }

    return 0;
}