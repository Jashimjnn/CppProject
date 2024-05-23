#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    ll n;
    cin >> n;
    if (n % 2 == 0)
    {
        ll x = n / 2;
        cout << x << endl;
        for (int i = 0; i < x; i++)
        {
            cout << 2 << " ";
        }
        cout << endl;
    }
    else if (n == 3)
    {
        cout << 1 << endl;
        cout << 3 << endl;
    }
    else
    {
        n = n - 3;
        ll x = n / 2;
        cout << x + 1 << endl;
        for (int i = 0; i < x; i++)
        {
            cout << 2 << " ";
        }
        cout << 3 << endl;
    }
    return 0;
}