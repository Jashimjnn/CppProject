#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    ll mx = LLONG_MIN;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] % 2 == 0)
        {
            mx = max(mx, v[i]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            ll sum = v[i] + v[j];
            if (sum % 2 == 0)
            {
                mx = max(mx, sum);
            }
        }
    }
    cout << mx << endl;
    return 0;
}