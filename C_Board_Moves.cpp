#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll sum = 0;
        for (ll i = 1; i <= n / 2; i++)
        {
            sum += (i * i * 8);
        }
        cout << sum << endl;
    }
}