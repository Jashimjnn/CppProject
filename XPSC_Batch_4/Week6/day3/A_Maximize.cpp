#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
ll gcd(ll a, ll b)
{
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll mx = 0, flag=0;
        for (int i = 1; i < n; i++)
        {
            ll ans = gcd(n, i)+i;
            if (ans > mx)
            {
                flag = i;
                mx = ans;
            }
        }
        cout << flag << endl;
    }
    return 0;
}