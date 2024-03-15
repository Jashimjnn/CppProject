#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
void Jashim()
{
    ll n;
    cin >> n;
    if (n % 2 == 1)
    {
        N;
    }
    else
    {
        Y;
        int i = 0;
        while (n)
        {
            if (i % 2 == 0)
            {
                cout << "AA";
                i = 1;
            }
            else
            {
                cout << "BB";
                i = 0;
            }
            n -= 2;
        }
        cout << endl;
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