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
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    ll ans = (1 << n);
    bool flag = false;
    for (int i = 0; i < ans; i++)
    {
        ll sum = 0;
        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j))
            {
                sum += v[j];
            }
            else
            {
                sum -= v[j];
            }
        }
        if (sum % 360 == 0)
        {
            flag = true;
            break;
        }
    }
    if (flag)
    {
        Y;
    }
    else
    {
        N;
    }
    return 0;
}