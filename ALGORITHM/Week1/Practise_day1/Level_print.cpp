#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
vector<ll> v[1005];
bool vis[1005];
ll level[1005];
ll parent[1005];
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
        for (auto child : v[pr])
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
    memset(parent, -1, sizeof(parent));
    ll x;
    cin >> x;
    bfs(0);
    vector<ll>v1;
    for(int i=0;i<n;i++)
    {
        if(level[i]==x)
        {
            v1.push_back(i);
        }
    }
    sort(v1.rbegin(),v1.rend());
    for(auto e:v1)
    {
        cout<<e<<" ";
    }
    cout<<endl;
    return 0;
}