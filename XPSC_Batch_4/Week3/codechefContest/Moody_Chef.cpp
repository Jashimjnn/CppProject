#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
void Jashim()
{
    ll n, l, r;
    cin >> n >> l >> r;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    ll mx = 0;
    ll mn = 0;
    ll cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] >= l && v[i] <= r)
        {
            cnt++;
        }
        else
        {
            cnt--;
        }
        mx = max(mx, cnt);
        mn = min(mn, cnt);
    }
    cout << mx << " " << mn << endl;
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        Jashim();
    }
    return 0;
}