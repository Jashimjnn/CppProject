#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
void display(ll n)
{
    vector<ll> v(n);
    ll ans = 0;
    ll ans1 = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] < 0)
        {
            ans++;
        }
        if (v[i] == 0)
        {
            ans1++;
        }
    }
    if (ans1 > 0)
    {
        cout << 0 << endl;

        return;
    }
    if (ans == 0)
    {
        cout << 1 << endl;
        cout << 1 << " " << 0 << endl;
        return;
    }
    if (ans % 2 != 0)
    {
        cout << 0 << endl;
        return;
    }
    cout << 1 << endl;
    cout << ans - 1 << " " << 0 << endl;
    // return;
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        display(n);
    }
    return 0;
}