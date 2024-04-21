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
    vector<ll> pre(1000000001);
    pre[1] = 1;
    for (int i = 2; i <= 1000000000; i++)
    {
        pre[i + 1] = pre[i - 1] + pre[i];
    }
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        vector<ll>v;
        ll sum = 0;
        for (int i = 1; i <= n; i++)
        {

        }
        cout << sum << endl;
    }
    return 0;
}
