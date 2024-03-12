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
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        ll x = v[0];
        sort(v.begin()+1, v.end());
        for (int i = 0; i < n; i++)
        {
            if (v[i] > x)
            {
                x += (v[i] - x + 1) / 2;
            }
        }
        cout << x << endl;
    }
    return 0;
}