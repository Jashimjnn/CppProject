#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
const int X = 1e5 + 5;
vector<int> v[X];
vector<int> dis_src;
vector<int> dis_dst;
bool vis[X];
void bfs(int src, vector<int> &dis)
{
    int cnt = 1;
    queue<int> q;
    q.push(src);
    vis[src] = true;
    while (!q.empty())
    {
        int fr = q.front();
        q.pop();
        for (int child : v[fr])
        {
            if (!vis[child])
            {
                q.push(child);
                vis[child] = true;
                dis[child] = dis[fr] + 1;
            }
        }
    }
}
int main()
{
    int t;
    cin >> t;
    for (int k = 1; k <= t; k++)
    {
        int n;
        cin >> n;
        int e;
        cin >> e;
        for(int i=0;i<n;i++)
        {
            v[i].clear();
        }
        dis_src.assign(n, 0);
        dis_dst.assign(n, 0);
        while (e--)
        {
            int a, b;
            cin >> a >> b;
            v[a].push_back(b);
            v[b].push_back(a);
        }
        memset(vis, false, sizeof(vis));
        int src, dst;
        cin >> src >> dst;
        bfs(src, dis_src);
        memset(vis, false, sizeof(vis));
        bfs(dst, dis_dst);
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            ans = max(ans, dis_src[i] + dis_dst[i]);
        }
        cout << "Case " << k << ": " << ans << endl;
    }
    return 0;
}