#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
const int X = 1e5 + 5;
vector<int> v[X];
bool vis[X];
int par[X];
void bfs(int src)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;
    while (!q.empty())
    {
        int fr = q.front();
        q.pop();
        for (int child : v[fr])
        {
            if (vis[child] == false)
            {
                q.push(child);
                vis[child] = true;
                par[child] = fr;
            }
        }
    }
}
int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    int q;
    cin >> q;
    while (q--)
    {
        int src, dst;
        cin >> src >> dst;
        queue<int> path;
        memset(vis, false, sizeof(vis));
        memset(par, -1, sizeof(par));
        bfs(src);
        int x = dst;
        while (x != -1)
        {
            path.push(x);
            x = par[x];
        }
        path.pop();
        if (src == dst)
        {
            cout << 0 << endl;
        }
        else
        {
            if (!path.empty())
            {
                cout << path.size() << endl;
            }
            else
            {
                cout << -1 << endl;
            }
        }
    }
    return 0;
}