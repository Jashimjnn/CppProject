#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
const ll X = 1e7 + 5;
vector<ll> v[X];
bool vis[X];
ll level[X];
ll parent[X];
void bfs(ll src)
{
    queue<ll> q;
    q.push(src);
    vis[src] = true;
    level[src] = 0;
    while (!q.empty())
    {
        ll pr = q.front();
        q.pop();
        for (ll child : v[pr])
        {
            if (vis[child] == false)
            {
                q.push(child);
                vis[child] = true;
                level[child] = level[pr] + 1;
                parent[child] = pr;
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
        v[a].push_back(b);
        v[b].push_back(a);
    }
    memset(vis, false, sizeof(vis));
    memset(level, -1, sizeof(level));
    ll x, y, k;
    cin >> x >> y >> k;
    bfs(x);
    ll l;
    if(level[y]%2==0)
    {
        l=level[y]/2;
    }
    else
    {
        l=(level[y]/2)+1 ;
    }
    if(level[y]!=-1 && level[x]!=-1 && l <= k)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}