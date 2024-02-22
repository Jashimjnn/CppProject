#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
const ll X = 1e12;
bool display(ll x, ll y)
{

    if (x == y)
    {
        return true;
    }
    if (x > y)
    {
        return false;
    }
    if (display(x * 10, y))
    {
        return true;
    }
    if (display(x * 20, y))
    {
        return true;
    }
    return false;
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        bool flag = display(1, n);
        if (flag == true)
        {
            Y;
        }
        else
        {
            N;
        }
    }
    return 0;
}