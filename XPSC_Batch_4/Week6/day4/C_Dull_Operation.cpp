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
        ll n;
        cin >> n;
        ll x = 0, y = 0;
        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < n; j++)
            {
                ll ans = i | j;
                ll ans1 = j ^ j;
                if (ans * ans1 == n)
                {
                    x = i;
                    y = j;
                    break;
                }
            }
            if (x != 0 && y != 0)
            {
                break;
            }
        }
        cout << x << " " << y << endl;
    }
    return 0;
}
