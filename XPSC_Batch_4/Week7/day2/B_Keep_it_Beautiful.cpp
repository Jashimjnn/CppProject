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
        ll q, n, flag = 0, x = -1, y = -1;
        cin >> q;
        while (q--)
        {
            cin >> n;
            if (flag==true)
            {
                if (n >= y && n <= x)
                {
                    y = n;
                    cout << 1;
                }
                else
                {
                    cout << 0;
                }
            }
            else
            {
                if (x == -1)
                {
                    x = n;
                    y = n;
                    cout << 1;
                }
                else if (n >= y)
                {
                    y = n;
                    cout << 1;
                }
                else if (x >= n)
                {
                    y = n;
                    flag = 1;
                    cout << 1;
                }
                else
                {
                    cout << 0;
                }
            }
        }
        cout << endl;
    }
    return 0;
}