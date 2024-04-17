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
        cin >> n;
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        ll ansOr = 0;
        ll ansAnd = -1;
        for (int i = 0; i < n; i++)
        {
            ansOr |= v[i];
            ansAnd &= v[i];
        }
        cout << ansOr - ansAnd << endl;
    }
    return 0;
}