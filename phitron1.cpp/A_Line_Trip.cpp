#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
void display(ll t)
{
    ll n, x;
    cin >> n >> x;
    ll ar[n+1];
    ar[0] = 0;
    for (ll i = 1; i < n+1; i++)
    {
        cin >> ar[i];
    }
    bool flag = false;
    ll mx = 0, mx2 = 0;
    for (ll i = 0; i < n; i++)
    {
        mx = max(mx, (ar[i + 1] - ar[i]));
        flag = true;
    }
    ll k;
    if (flag)
    {
        mx2 = (x - ar[n]) * 2;
        k = max(mx, mx2);
    }
    cout << k << endl;
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        display(t);
    }
    return 0;
}