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
        ll a = 1;
        ll b = 0;
        ll cnt = 0;
        while (a * 2 <= n)
        {
            a *= 2;
            cnt++;
        }
        for (int i = cnt - 1; i >= 0; i--)
        {
            if (n & 1 << i)
            {
                b = b | (1<< i);
            }
        }
        cout<<b<<" "<<a<<endl;
    }
    return 0;
}