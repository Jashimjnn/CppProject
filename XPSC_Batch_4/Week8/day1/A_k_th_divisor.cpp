#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> v;

    for (ll i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            v.push_back(i);
            if ((n / i) != i)
            {
                v.push_back(n / i);
            }
        }
    }
    sort(v.begin(), v.end());
    if (n < k || k > v.size())
    {
        cout << -1 << endl;
    }
    else
    {
        cout << v[k - 1] << endl;
    }

    return 0;
}