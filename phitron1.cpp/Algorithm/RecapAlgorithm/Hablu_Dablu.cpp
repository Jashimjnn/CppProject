#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    ll n, h;
    cin >> n >> h;
    vector<ll> v(n);
    ll mx = LLONG_MIN;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        mx = max(mx, v[i]);
    }
    mx--;
    for (int i = mx; i > 0; i--)
    {
        h = h - i;
    }
    if (h > 0)
    {
        cout << "Hablu" << endl;
    }
    else
    {
        cout << "Dablu" << endl;
    }
    return 0;
}