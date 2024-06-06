#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    ll n;
    cin >> n;
    if(n==1)
    {
        cout<<1<<endl;
        return 0;
    }
    for (int i = 1; i <= n; i++)
    {
        cout << i;
    }
    cout << endl;
    for (int i = 1; i < n-1; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j==1)
            {
                cout << (i+1);
            }
            else if (j == n)
            {
                cout << n;
            }
            else
            {
                cout<<" ";
            }
        }
        cout << endl;
    }
    for(int i=1;i<=n;i++)
    {
        cout<<n;
    }
    cout<<endl;

    return 0;
}