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
        ll n, m;
        cin >> n >> m;
        if (n == 1)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << (min(2LL, n - 1)) * m << endl;
        }
    }
    return 0;
}