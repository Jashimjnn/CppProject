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
        ll n, c;
        cin >> n >> c;
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        vector<ll> pre;
        for (int i = 0; i < n; i++)
        {
            ll x = (i + 1) + v[i];
            pre.push_back(x);
        }
        ll cnt = 0;
        ll sum = 0;
        sort(pre.begin(),pre.end());
        for (int i = 0; i < n; i++)
        {
            sum += pre[i];
            if (sum > c)
            {
                break;
            }
            cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}