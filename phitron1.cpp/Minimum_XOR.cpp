#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int>ar(n);
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        int xr = ar[0];

        for (int i = 1; i < n; i++)
        {
            xr ^= ar[i];
        }

        if (xr == 0)
        {
            cout << "0" << endl;
            
        }
        else
        {
            int mi = xr;
            for (auto i : ar)
            {
                mi = min(mi, xr ^ i);
            }
            cout << mi << endl;
        }
    }
    return 0;
}