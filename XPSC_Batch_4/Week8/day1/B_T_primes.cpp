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
        ll b = sqrt(v[i]);
        ll j;
        for (j = 2; j * j <= b; j++)
        {
            if (b % j == 0)
            {
                break;
            }
        }
        if (j * j > b && b * b == v[i] && v[i] > 1)
        {
            Y;
        }
        else
        {
            N;
        }
    }
    return 0;
} 