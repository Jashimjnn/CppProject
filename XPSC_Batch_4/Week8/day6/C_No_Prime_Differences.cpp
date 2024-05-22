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
        ll n, m;
        cin >> n >> m;
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                if (i % 2 == 0)
                {
                    cout << (n / 2 + i / 2) * m + j + 1 << " ";
                }
                else
                {
                    cout << (i / 2) * m + j + 1 << " ";
                }
            }
            cout << endl;
        }
        cout<<endl;
    }
    return 0;
}