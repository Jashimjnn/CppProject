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
        ll a, b, l;
        cin >> a >> b >> l;
        set<ll> st1;
        for (ll i = 0; i < 21; i++)
        {
            ll z1 = (pow(a, i));
            if (l % z1 == 0)
            {
                ll val1 = (l / z1);
                for (ll j = 0; j < 21; j++)
                {
                    ll z2 = (pow(b, j));
                    if (val1 % z2 == 0)
                    {
                        st1.insert(val1 / z2);
                    }
                }
            }
        }
        cout << st1.size() << endl;
    }
    return 0;
}