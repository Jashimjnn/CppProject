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
    char ch, ch1;
    for (int i = 0; i < n; i++)
    {
        for (int x = 0; x < 2; x++)
        {
            if (i % 2 == 1)
            {
                ch = '.';
                ch1 = '#';
            }
            else
            {
                ch = '#';
                ch1 = '.';
            }
            for (int j = 0; j < n; j++)
            {
                for (int k = 0; k < 2; k++)
                {
                    if (j % 2 == 0)
                    {
                        cout << ch;
                    }
                    else
                    {
                        cout << ch1;
                    }
                }
            }
            cout << endl;
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