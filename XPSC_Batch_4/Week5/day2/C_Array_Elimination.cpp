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
        ll n;
        cin >> n;
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        vector<ll> bit(30, 0);
        for (int i = 0; i < 30; i++)
        {
            ll num = (1 << i);
            for (int j = 0; j < n; j++)
            {
                if (v[j] & num)
                {
                    bit[i]++;
                }
            }
        }

        for (int k = 1; k <= n; k++)
        {
            bool flag = false;
            for (int i = 0; i < 30; i++)
            {
                if (bit[i] % k != 0)
                {
                    flag = true;
                    break;
                }
            }
            if (!flag)
            {
                cout << k << " ";
            }
        }
        cout << endl;
    }
    return 0;
}