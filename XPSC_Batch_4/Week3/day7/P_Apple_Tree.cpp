#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
vector<vector<ll>> adj;
vector<ll> cnt;
void dfs(ll v, ll pa)
{
    if (adj[v].size() == 1 && adj[v][0] == pa)
    {
        cnt[v] = 1;
    }
    else
    {
        for (auto u : adj[v])
        {
            if (u != pa)
            {
                dfs(u, v);
                cnt[v] += cnt[u];
            }
        }
    }
}

void display()
{
    ll n, q;
    cin >> n;

    adj.assign(n, vector<ll>());

    for (int i = 0; i < n - 1; i++)
    {
        ll u, v;
        cin >> u >> v;
        u--;
        v--;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    cnt.assign(n, 0);
    dfs(0, -1);

    cin >> q;
    for (int i = 0; i < q; i++)
    {
        ll c, k;
        cin >> c >> k;
        c--;
        k--;

        ll res = cnt[c] * cnt[k];
        cout << res << endl;
    }
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        display();
    }

    return 0;
}