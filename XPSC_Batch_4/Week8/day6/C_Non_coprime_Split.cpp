#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
ll a, b, t;
void Jashim()
{
    cin >> a >> b;
    for (int i = a; i <= b; i++)
    {
        for (int j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                cout << j << " " << i - j << endl;
                return;
            }
        }
    }
    cout << "-1" << endl;
}
int main()
{
    cin >> t;
    while (t--)
    {
        Jashim();
    }
}
