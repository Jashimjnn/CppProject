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
        ll x = (n * (n - 1)) / 2;
        vector<ll> v(x);
        for (int i = 0; i < x; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        vector<ll> v1(n);
        ll idx = 0, flag = 1;
        ll cnt = n - flag;
        while (n - flag > 0)
        {
            v1[idx++] = v[cnt - 1];
            flag++;
            cnt += (n - flag);
        }
        v1[n - 1] = 1000000000;
        for (int i = 0; i < n; i++)
        {
            cout << v1[i] << " ";
        }
        cout << endl;
    }
    return 0;
}