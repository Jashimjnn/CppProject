#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
ll gcd(ll a, ll b)
{
    return __gcd(a, b);
}
ll lcm(ll a, ll b)
{
    return ((a / gcd(a, b)) * b);
}
int main()
{
    ll n, a, b, p, q, sum = 0;
    cin >> n >> a >> b >> p >> q;

    sum += ((n / a) * p);
    sum += ((n / b) * q);
    ll cnt = (n / lcm(a, b));
    sum -= (cnt * (p + q));
    sum += (cnt * max(p, q));
    cout << sum << endl;
    return 0;
}