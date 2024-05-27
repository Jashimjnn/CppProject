#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define y cout << "Yes" << endl;
#define N cout << "NO" << endl;
#define nn cout << "No" << endl;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        if (n >= m && n % 2 == m % 2)
        {
            y;
        }
        else
        {
            nn;
        }
    }
    return 0;
}