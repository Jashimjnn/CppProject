#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    ll n, q;
    cin >> n >> q;
    ll ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    ll pre[n];
    pre[0] = ar[0];
    for (int i = 1; i < n; i++)
    {
        pre[i] = ar[i] + pre[i - 1];
    }
    while (q--)
    {
        ll l, r;
        cin >> l >> r;
        l--;
        r--;
        ll sum = 0;
        if (l == 0)
        {
            sum = pre[r];
        }
        else
        {
            sum = pre[r] - pre[l - 1];
        }
        cout << sum << endl;
    }
    return 0;
}