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
        for (auto &x : v)
        {
            cin >> x;
        }
        sort(v.begin(), v.end());
        vector<ll> v1(n);
        for (int i = n-1; i>=0; i -= 2)
        {
            ll x = v.back();
            v.pop_back();
            v1[i] = x;
        }
        for (int i = n-2; i>=0; i -= 2)
        {
            ll x = v.back();
            v.pop_back();
            v1[i] = x;
        }
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                sum += v1[i];
            }
            else
            {
                sum -= v1[i];
            }
        }
        cout << abs(sum) << endl;
    }
    return 0;
}