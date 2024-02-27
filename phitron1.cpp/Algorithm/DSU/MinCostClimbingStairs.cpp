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
    vector<ll> cost(n);
    for (int i = 0; i < n; i++)
    {
        cin >> cost[i];
    }

    for (int i = 2; i < n; i++)
    {
        cost[i] += min(cost[i - 1], cost[i - 2]);
    }
    ll ans =  min(cost[n - 1], cost[n - 2]);
    cout << ans << endl;
    return 0;
}