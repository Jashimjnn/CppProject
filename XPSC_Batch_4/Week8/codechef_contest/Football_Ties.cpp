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
        if (x == 1 && y == 1)
        {
            cout << 1 << endl;
        }
        else if (x == 0 || y == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            ll cnt = 0;
            while ((x - cnt) % 3 != 0 && (y - cnt) % 3 != 0)
            {
                cnt++;
            }
            cout << cnt << endl;
        }
    }
    return 0;
}