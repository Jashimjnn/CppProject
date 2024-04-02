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
        ll cnt = 0;
        ll x = 0;
        bool flag = true;
        while (n--)
        {
            if (x == true)
            {
                cnt++;
            }

            x = (x + 1) % 7;
        }
        cout << cnt << endl;
    }
    return 0;
}