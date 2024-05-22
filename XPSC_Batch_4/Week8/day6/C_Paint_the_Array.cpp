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
        ll cnt = 0, cnt1 = 0;
        for (int i = 0; i < n; i += 2)
        {
            cnt = __gcd(cnt, v[i]);
        }
        for (int i = 1; i < n; i += 2)
        {
            cnt1 = __gcd(cnt1, v[i]);
        }

        bool flag = true;
        for (int i = 0; i < n; i += 2)
        {
            if (v[i] % cnt1 == 0)
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            cout << cnt1 << endl;
            continue;
        }
        flag = true;
        for (int i = 1; i < n; i += 2)
        {
            if (v[i] % cnt == 0)
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            cout << cnt << endl;
            continue;
        }
        cout << 0 << endl;
    }
    return 0;
}