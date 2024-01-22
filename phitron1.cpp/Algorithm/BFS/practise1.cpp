#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
vector<int> v[1005];
bool vis[1005];
int level[1005];
int parent[1005];
void bfs(int src)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;
    level[src] = 0;
    while (!q.empty())
    {
        int pr = q.front();
        q.pop();
        for (int child : v[pr])
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
        int src, des;
        cin >> src >> des;
        memset(vis, false, sizeof(vis));
        memset(level, -1, sizeof(level));
        memset(parent, -1, sizeof(parent));
        bfs(src);
        int x = des;
        queue<int> q1;

        while (x != -1)
        {
            q1.push(x);
            x = parent[x];
        }
        q1.pop();
        if (src == des)
        {
            cout << 0 << endl;
        }
        else
        {
            if (q1.size() == 0)
            {
                cout << -1 << endl;
            }
            else
            {
                cout << q1.size() << endl;
            }
        }
    }
    return 0;
}