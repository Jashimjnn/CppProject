#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
void display()
{
    ll n, m, x, y, l;
    ll ans, p = 1, q = 1;
    cin >> n >> m >> x >> y >> l;
    if (l == 1)
    {
        ans = n * m;
    }
    else
    {
        p += ((m - y) / l) + (y - 1) / l;
        q += ((n - x) / l) + (x - 1) / l;
        ans = p * q;
    }
    cout << ans << endl;
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        display();
    }
    return 0;
}