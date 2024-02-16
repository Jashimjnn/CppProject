#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
const ll X = 1e6 + 5;
bool vis[X];
vector<ll> adj[X];
ll par[X];
ll cnt=0;
void bfs(ll src)
{
    queue<ll> q;
    q.push(src);
    vis[src] = true;
    while (!q.empty())
    {
        ll fr = q.front();
        q.pop();
        for (ll child : adj[fr])
        {
            if (vis[child] == true && par[fr] != child)
            {
                cnt++;
            }
            if (vis[child] == false)
            {
                vis[child] = true;
                par[child] = fr;
                q.push(child);
            }
        }
    }
}
int main()
{
    ll n, e;
    cin >> n >> e;
    while (e--)
    {
        ll a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    memset(vis, false, sizeof(vis));
    memset(par, -1, sizeof(par));
    for (ll i = 1; i < n; i++)
    {
        if (!vis[i])
        {
            bfs(i);
        }
    }
    cout<<cnt/2<<endl;
    return 0;
}