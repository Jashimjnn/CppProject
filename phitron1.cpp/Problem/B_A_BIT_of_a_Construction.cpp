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
        ll n, k;
        cin >> n >> k;
        if (n == 1)
        {
            cout << k << endl;
            continue;
        }

        ll msb = __lg(k);
        ll a = 1 << msb;
        cout << --a << " ";
        cout << k - a << " ";
        for (int i = 0; i < n - 2; i++)
        {
            cout << 0 << " ";
        }
        cout << endl;
    }
    return 0;
}
