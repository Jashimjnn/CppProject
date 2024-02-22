#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    string str;
    cin >> str;
    ll m;
    cin >> m;
    ll n = str.size();
    vector<ll> pre(n, 0);
    for (ll i = 1; i < n; ++i)
    {
        pre[i] = pre[i - 1] + (str[i] == str[i - 1]);
    }
    while (m--)
    {
        ll l, r;
        cin >> l >> r;
        cout << pre[r - 1] - pre[l - 1] << endl;
    }
    return 0;
}