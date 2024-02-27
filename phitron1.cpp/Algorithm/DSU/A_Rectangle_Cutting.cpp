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
        ll a, b;
        cin >> a >> b;
        if (a > b)
        {
            swap(a, b);
        }
        if (((a % 2 == 1) && (b % 2 == 1)) || ((a % 2 == 1) && (b == 2 * a)))
        {
            cout << "No\n";
        }
        else
        {
            cout << "Yes\n";
        }
    }
    return 0;
}