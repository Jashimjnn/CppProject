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
        ll n, b;
        cin >> n >> b;
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        ll ans = -1;
        for (int i = 0; i < n; i++)
        {
            if ((b & v[i]) == b)
            {
                ans &= v[i];
            }
        }
        if (ans == b)
        {
            Y;
        }
        else
        {
            N;
        }
    }
    return 0;
}