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
    ll cnt = 0;
    for (int i = 1; i < n; i++)
    {
        if (v[i] >= v[i-1])
        {
            continue;
        }
        cnt += (v[i - 1] - v[i]);
        v[i] = v[i-1];
    }
    cout << cnt << endl;
    return 0;
}