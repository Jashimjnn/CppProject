#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
void Jashim_Unique()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        sum += v[i];
    }
    if (sum % 3 == 0)
    {
        cout << 0 << endl;
    }
    else
    {
        ll cnt = 0;
        for (int i = 0; i < n; i++)
        {
            ll ans = sum - v[i];
            if (ans % 3 == 0)
            {
                cnt = 1;
                break;
            }
        }
        if (cnt == 1)
        {
            cout << 1 << endl;
        }
        else
        {
            ll flag = sum % 3;
            flag = 3 - flag;
            if (flag < 2)
            {
                cout << 1 << endl;
            }
            else
            {
                cout << 2 << endl;
            }
        }
    }
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        Jashim_Unique();
    }
    return 0;
}