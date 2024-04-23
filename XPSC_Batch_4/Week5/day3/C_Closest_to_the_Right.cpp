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
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    while (k--)
    {
        ll x;
        cin >> x;
        ll left = 0, right = n - 1, mid, idx = n;
        while (left <= right)
        {
            mid = (left + right) / 2;
            if (v[mid] >= x)
            {
                idx = mid;
                right = mid - 1;
            }
            else
            {
                left = mid + 1;
            }
        }
        cout << idx + 1 << endl;
    }
    return 0;
}