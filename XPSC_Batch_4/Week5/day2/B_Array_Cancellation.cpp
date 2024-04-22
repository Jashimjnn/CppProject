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
        for (int i = 0; i < n; i++)
        {
            if (v[i] > 0)
            {
                cnt += v[i];
            }
            else
            {
                if (v[i] + cnt > 0)
                {
                    cnt += v[i];
                }
                else
                {
                    v[i] += cnt;
                    cnt = 0;
                    cnt1 += v[i];
                }
            }
        }
        cout << abs(cnt1) << endl;
    }
    return 0;
}