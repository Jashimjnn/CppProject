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
    vector<ll> pre(n);
    pre[0] = v[0];
    for (int i = 1; i < n; i++)
    {
        pre[i] = v[i] + pre[i - 1];
    }
    ll q;
    cin >> q;
    while (q--)
    {
        ll x;
        cin >> x;
        ll left = 0, right = n - 1;
        ll cnt = n;
        while (left <= right)
        {
            ll mid = (right + left) / 2;
            if (pre[mid] >= x)
            {
                cnt = mid;
                right = mid - 1;
            }
            else
            {
                left = mid + 1;
            }
        }
        cout << cnt+1 << endl;
    }
    return 0;
}