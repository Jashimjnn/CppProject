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
        ll sum = 0;
        ll cnt = 0;
        ll mn = LLONG_MAX;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] < 0)
            {
                cnt++;
            }
            sum += abs(v[i]);
            mn = min(mn, abs(v[i]));
        }
        if (cnt % 2 == 1)
        {
            sum -= (2LL * mn);
            cout << sum << endl;
        }
        else
        {
            cout << sum << endl;
        }
    }
    return 0;
}