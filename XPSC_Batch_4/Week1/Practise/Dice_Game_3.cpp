#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
void Jashim()
{
    ll n;
    cin >> n;
    ll sum;
    if (n > 1)
    {
        ll x = (n / 2) * 13;
        ll y = (n % 2) * 6;
        sum = x + y;
    }
    else
    {
        sum = 6;
    }
    cout << sum << endl;
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