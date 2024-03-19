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
        ll flag = b % 3;
        ll ans = a + ceil((float)(b + c) / 3.0);
        if ((flag + c) >= 3 || flag == 0)
        {
            cout << ans << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}
