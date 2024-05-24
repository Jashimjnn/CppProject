#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    ll n, mx, g=0, sum=0;
    cin >> n;
    vector<ll> v(n);
    for (auto &e : v)
    {
        cin >> e;
    }
    mx = *max_element(begin(v), end(v));
    for (auto e : v)
    {
        g = __gcd(mx - e, g);
    }
    for (auto e : v)
    {
        sum += (mx - e) / g;
    }
    cout << sum << ' ' << g<<endl;
    return 0;
}