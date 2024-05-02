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
        ll n, k;
        cin >> n >> k;
        vector<ll> v(k);
        for (int i = 0; i < k; i++)
        {
            cin >> v[i];
        }
        sort(v.rbegin(), v.rend());
        ll cnt = 0;
        ll sum = 0;

        while (cnt < v.size() && sum + n - v[cnt] < n)
        {
            sum += n - v[cnt++];
        }
        cout << cnt <<endl;
    }
    return 0;
}