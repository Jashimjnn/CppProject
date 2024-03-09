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
        ll cnt = 0;
        ll i=0;
        while (v[i] * 2 < v[i + 1])
        {
            v[i] *= 2;
            cnt += 1;
            i++;
        }
        cout << cnt << endl;
    }
    return 0;
}