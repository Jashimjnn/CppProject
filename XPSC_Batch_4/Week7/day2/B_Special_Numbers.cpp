#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
const ll x = 1e9+7;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        ll flag = 1;
        ll ans = 0;
        for(int i=0;i<31;i++)
        {
            if (k & (1 << i))
            {
                ans = (ans + flag) %x;
            }
            flag *= n;
            flag %= x;
        }
        cout << ans << endl;
    }
    return 0;
}