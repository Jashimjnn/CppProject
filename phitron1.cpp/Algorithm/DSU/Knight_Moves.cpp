#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 100;
bool vis[N][N];
int adj[N][N];
int n, m;
char a[N][N];
bool valid(int si, int sj)
{
    if (si < 0 || si >= n || sj < 0 || sj >= m)
    {
        return false;
    }
    return true;
}
vector<pair<int, int>> dis = {{2, 1}, {1, 2}, {-1, 2}, {-2, 1}, {2, -1}, {1, -2}, {-1, -2}, {-2, -1}};
void bfs(int ci, int cj)
{
    queue<pair<int, int>> q;
    q.push({ci, cj});
    vis[ci][cj] = true;
    adj[ci][cj] = 0;
    while (!q.empty())
    {
        auto fr = q.front();
        q.pop();
        for (int i = 0; i < 8; i++)
        {
            int si = fr.first + dis[i].first;
            int sj = fr.second + dis[i].second;
            if (valid(si, sj) == true && vis[si][sj] == false)
            {
                q.push({si, sj});
                vis[si][sj] = true;
                adj[si][sj] = adj[fr.first][fr.second] + 1;
            }
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        int ki, kj;
        cin >> ki >> kj;
        int qi, qj;
        cin >> qi >> qj;
        int ci = ki, cj = kj;
        memset(vis, false, sizeof(vis));
        memset(adj, -1, sizeof(adj));
        bfs(ci, cj);
        if (adj[qi][qj] != -1)
        {
            cout << adj[qi][qj] << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}
