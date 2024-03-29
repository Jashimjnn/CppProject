#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
void Jashim()
{
    ll a, b;
    cin >> a >> b;
    ll x = b + 10;
    if (x < a)
    {
        cout << 0 << endl;
        return;
    }
    else
    {
        ll ans = b + 10 - a;
        if (ans >= a)
        {
            cout << ceil((float)ans / 3.0) << endl;
        }
        else
        {
            cout<<abs(ceil((float)ans / 3.0))<<endl;
        }
    }
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        Jashim();
    }
    return 0;
}