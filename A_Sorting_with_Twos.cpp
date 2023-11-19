#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >>n>>m;
        int ar[n];
        int flag = 0;
        for (int i = 1; i < n; i++)
        {
            cin >> ar[i];
            if (m > ar[i])
            {
                if (((i - 1) & (i)) != 0)
                {
                    flag = 1;
                }
            }
            m = ar[i];
        }
        if (flag == 0)
        {
            Y;
        }
        else
        {
            N;
        }
    }
}