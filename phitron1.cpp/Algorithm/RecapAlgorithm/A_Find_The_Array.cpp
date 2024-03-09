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
        ll sum = 0;
        ll cnt = 0;
        if (n == 1)
        {
            cout << 1 << endl;
        }
        else
        {
            ll i = 1;
            while (sum < n)
            {
                sum += i;
                cnt++;
                i+=2;
            }
            cout << cnt << endl;
        }
    }
    return 0;
}