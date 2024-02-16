#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
void display()
{
    ll k, x, a;
    cin >> k >> x >> a;
    ll ans = 0;
    ll ans1 = 1;
    for (int i = 0; ans1 && i < x; i++)
    {
        ll flag = (ans + k - 1) / (k - 1);
        if (flag == 0)
        {
            ans += 1;
        }
        else
        {
            ans += flag;
        }
        ans1=ans<=a;
    }
    if (k * (a - ans) > a)
    {
        Y;
    }
    else
    {
        N;
    }
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