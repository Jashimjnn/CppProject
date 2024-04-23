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
        ll n, x;
        cin >> n >> x;
        if (n == x)
        {
            cout << -1 << endl;
            continue;
        }
        vector<ll> v;
        int a = 1;
        for (int i = 0; i < n; i++)
        {
            v.push_back(a);
            a += x;
        }
        if (v[n - 1] > n)
            cout << -1 << endl;
        else
        {
            for (auto e : v)
                cout << e << " ";
            cout << endl;
        }
    }
    return 0;
}