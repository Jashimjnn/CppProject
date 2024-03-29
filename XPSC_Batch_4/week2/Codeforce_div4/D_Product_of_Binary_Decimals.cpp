#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
bool Jashim(ll n)
{
    while (n > 0)
    {
        ll tmp = n % 10;
        if (tmp != 0 && tmp != 1)
        {
            return false;
        }
        n /= 10;
    }
    return true;
}
int main()
{
    ll t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;

        if (n == 1)
        {
            Y;
            continue;
        }
        if (Jashim(n))
        {
            Y;
            continue;
        }
        else
        {
            bool flag1 = false;
            while (n % 11 == 0)
            {
                if (n % 11 == 0)
                {
                    n /= 11;
                    if (n % 11 == 0 || n % 11 == 1)
                    {
                        flag1 = true;
                        break;
                    }
                }
            }
            if (flag1)
            {
                Y;
            }
            else
            {
                N;
            }
        }
    }

    return 0;
}