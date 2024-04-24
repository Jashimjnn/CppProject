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
    sort(v.begin(), v.end());
    ll q;
    cin >> q;
    while (q--)
    {
        ll x;
        cin >> x;
        ll left = 0, right = n - 1;
        ll cnt = 0;
        while (left <= right)
        {
            ll mid = (right + left) / 2 ;
            if (v[mid] <= x)
            {
                cnt = mid + 1;
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}