#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
bool prime(ll x)
{

    for (int i = 2; i*i<=x; i++)
    {
        if (x % i == 0)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll x;
        cin >> x;
        ll a = 1 + x;
        while (prime(a))
        {
            a++;
        }
        ll b = a + x;
        while (prime(b))
        {
            b++;
        }
        cout << a * b << endl;
    }
    return 0;
}