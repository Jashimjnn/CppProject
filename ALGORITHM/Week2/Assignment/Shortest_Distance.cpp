#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
const ll X = 1e18;
int main()
{
    ll n, e;
    cin >> n >> e;
    ll adj[n][n];
    for (ll i = 0; i <n; i++)
    {
        for (ll j = 0; j < n; j++)
        {
            adj[i][j] = X;
            if (i == j)
            {
                adj[i][j] = 0;
            }
        }
    }
    while (e--)
    {
        ll a, b, w;
        cin >> a >> b >> w;
        if (w < adj[a-1][b-1])
        {
            adj[a-1][b-1] = w;
        }
    }

    for (ll k = 0; k < n; k++)
    {
        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < n; j++)
            {
                if (adj[i][k] + adj[k][j] < adj[i][j])
                {
                    adj[i][j] = adj[i][k] + adj[k][j];
                }
            }
        }
    }

    ll q;
    cin >> q;
    while (q--)
    {
        ll x, y;
        cin >>x >> y;
        if (adj[x-1][y-1] == X)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << adj[x-1][y-1] << endl;
        }
    }

    return 0;
}