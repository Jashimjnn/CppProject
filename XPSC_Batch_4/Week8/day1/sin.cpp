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
        ll n;
        cin>>n;
        ll ans = asin(n);
        ll x = ans * 180 / (3.1416);
        cout << x << endl;
    }
    return 0;
}