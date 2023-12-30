#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
void display()
{
    ll x, y;
    cin >> x >> y;
    ll tmp = __gcd(x, y);

    ll cr_ans = x * y / tmp;

    if (cr_ans == y)
    {
        ll i = 2;
        while (i * i <= y)
        {
            if (x % i == 0 || y % i == 0)
            {

                cout << y * i << endl;
                return;
            }
            i++;
        }
        cout << y * y << endl;
        return;
    }
    cout << cr_ans << endl;
}
int main()
{
    ll t;
    cin >> t;

    while (t--)
    {
        display();
    }

    return 0;
}
