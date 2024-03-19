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
        ll sum = 0;
        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            sum += v[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (v[i] % 3 == 1)
            {
                flag = true;
                break;
            }
        }
        if (sum % 3 == 0)
        {
            cout << 0 << endl;
        }
        else if (sum % 3 == 2)
        {
            cout << 1 << endl;
        }
        else
        {
            if (flag == true)
            {
                cout << 1 << endl;
            }
            else
            {
                cout << 2 << endl;
            }
        }
    }
    return 0;
}