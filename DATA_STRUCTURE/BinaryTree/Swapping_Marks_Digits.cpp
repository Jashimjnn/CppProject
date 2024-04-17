#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "Yes" << endl;
#define N cout << "No" << endl;
ll fun(ll a)
{
    ll ans = 0;
    while (a != 0)
    {
        ll tmp = a % 10;
        ans = ans * 10 + tmp;
        a /= 10;
    }
    return ans;
}
void Jashim()
{
    ll a, b;
    cin >> a >> b;
    ll ans = fun(a);
    ll ans1 = fun(b);
    bool flag3 = false;
    if(a>b)
    {
        flag3 = true;
    }
    bool flag = false;
    if (ans > b)
    {
        flag = true;
    }
    bool flag1 = false;
    if (a > ans1)
    {
        flag1 = true;
    }
    bool flag2 = false;
    if (ans > ans1)
    {
        flag2 = true;
    }
    if (flag || flag1 || flag2 || flag3)
    {
        Y
    }
    else
    {
        N
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