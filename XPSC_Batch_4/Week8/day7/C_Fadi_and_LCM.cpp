#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
ll lcm(ll a, ll b)
{
    return a / __gcd(a, b) * b;
}
int main()
{
    ll n;
    cin >> n;
    ll ans;
    for (ll i = 1; i * i <= n; i++)
    {
        if (n % i == 0 && lcm(i, n / i) == n)
        {
            ans = i;
        }
    }
    cout << ans << " " << n / ans << endl;
    return 0;
}