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
        ll a, b, m;
        cin >> a >> b >> m;
        ll x = m/a;
        ll y = m/b;
        cout << (x+y+2) << endl;
    }
    return 0;
}