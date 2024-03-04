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
        ll sum = 0;
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            sum += v[i];
        }
        // sort(v.begin(), v.end());
        if (sum == n)
        {
            cout << 0 << endl;
        }
        else if (sum < n)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << sum - n << endl;
        }
    }
    return 0;
}