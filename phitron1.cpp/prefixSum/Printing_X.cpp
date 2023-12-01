#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    int n;
    cin >> n;
    // int j=n/2+1;
    if (n == 1)
    {
        cout << "X";
        return 0;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == j)
            {
                if (i == n / 2 + 1 && j == n / 2 + 1)
                {
                    cout << "X";
                    continue;
                }
                cout << "\\";
            }
            else if (i + j == n + 1)
            {
                cout << "/";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}