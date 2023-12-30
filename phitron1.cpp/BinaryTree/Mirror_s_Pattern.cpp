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
    if(n==1)
    {
        cout<<1<<endl;
    }
    else
    {
        for (int i = 1; i <= n; i++)
    {
        cout << i;
    }
    cout << endl;
    for (int i = 2; i < n; i++)
    {
        cout << i;
        for (int j = 2; j < n; j++)
        {
            if (j == i || j == n - i + 1)
            {
                cout << " ";
            }
            else
            {
                cout << " ";
            }
        }
        cout << n - i + 1 << endl;
    }
    for(int i=n;i>=1;i--)
    {
        cout<<i;
    }
    cout<<endl;
    }

    return 0;
}