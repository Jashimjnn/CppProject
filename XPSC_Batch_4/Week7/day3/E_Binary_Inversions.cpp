#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
ll fun(vector<ll> a, ll n)
{
    ll sum = 0, cnt = 0;
    for (ll i = 0; i < n; i++)
    {
        if (a[i] == 1)
        {
            cnt++;
        }
        else
        {
            sum += cnt;
        }
    }
    return sum;
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> v(n);
        for(auto &x:v)
        {
            cin>>x;
        }
        ll ans = fun(v, n);
        ll id = -1;
        for (ll i = 0; i < n; i++)
        {
            if (v[i] == 0)
            {
                v[i] = 1;
                id = i;
                break;
            }
        }
        ans = max(ans, fun(v, n));
        if (id != -1)
        {
            v[id] = 0;
        }
        for (ll i = n - 1; i >= 0; i--)
        {
            if (v[i] == 1)
            {
                v[i] = 0;
                break;
            }
        }
        ans = max(ans, fun(v, n));
        cout << ans << endl;
    }
    return 0;
}