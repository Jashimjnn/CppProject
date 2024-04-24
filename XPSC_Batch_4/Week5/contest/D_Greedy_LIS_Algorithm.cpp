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
        ll n, x;
        cin >> n >> x;
        if (n == 1 && x == 0)
        {
            cout << 1 << endl;
            continue;
        }
        if (x + 1 >= n)
        {
            cout << -1 << endl;
            continue;
        }

        for (int i = n; i > x + 1; i--)
        {
            cout << i << " ";
        }
        for (int i = 1; i <= x + 1; i++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}