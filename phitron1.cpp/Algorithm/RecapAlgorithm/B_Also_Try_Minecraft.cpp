#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    ll n, m;
    cin >> n>>m;
    vector<ll> v(n), v1(n), v2(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vector<ll> pre(n), suf(n);
    pre[0] = 0;
    for (int i = 1; i < n; i++)
    {
        if (v[i - 1] > v[i])
        {
            pre[i] = (abs(v[i - 1] - v[i]) + pre[i - 1]);
        }
    }
    suf[n - 1] = 0;
    for (int i = n - 2; i >= 1; i--)
    {
        if (v[i - 1] < v[i])
        {
            suf[i] = (abs(v[i - 1] - v[i]) + suf[i - 1]);
        }
    }
    v1[0] = pre[0];
    for (int i = 1; i < n; i++)
    {
        v1[i] = pre[i] + v1[i - 1];
    }
    v2[n - 1] = suf[n - 1];
    for (int i = n - 2; i >= 1; i--)
    {
        v2[i] = suf[i] + v2[i + 1];
    }
    // for (int i = 0; i < n; i++)
    // {
    //     cout << v1[i] << " ";
    // }
    // cout << endl;
    // for (int i = 0; i < n; i++)
    // {
    //     cout << v2[i] << " ";
    // }
    return 0;
}