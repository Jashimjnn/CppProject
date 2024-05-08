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
        for (auto &x : v)
        {
            cin >> x;
        }
        ll cnt = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if ((j + 1) * log(v[i]) <= log(v[j]))
                {
                    cnt++;
                }
            }
        }
        cout << cnt << endl;
    }
    return 0;
}