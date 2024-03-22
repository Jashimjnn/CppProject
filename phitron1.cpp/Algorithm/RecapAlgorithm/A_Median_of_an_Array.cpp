#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
ll Jashim()
{
    ll n;
    cin >> n;
    vector<ll> v(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    ll cnt = 0;
    for (int i = (n + 1) / 2; i <= n; i++)
    {
        if (v[i] == v[(n + 1) / 2])
        {
            cnt++;
        }
        else
        {
            break;
        }
    }
    return cnt;
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll ans = Jashim();
        cout << ans << endl;
    }
    return 0;
}