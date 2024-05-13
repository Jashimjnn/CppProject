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
        double l, v1, v2;
        cin >> l >> v1 >> v2;
        double x = ceil(l / v1);
        double y = ceil(l / v2);
        ll ans = x - y;
        if (y < x)
        {
            cout << ans-1 << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}