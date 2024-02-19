#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
const int X = 1005;
char adj[X][X];
bool vis[X][X];
pair<int, int> par[X][X];
int n, m;
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};

bool valid(int x, int y)
{
    return x >= 0 && x < n && y >= 0 && y < m && !vis[x][y] && adj[x][y] != '#';
}

void bfs(pair<int, int> src)
{
    queue<pair<int, int>> q;
    q.push(src);
    vis[src.first][src.second] = true;

    while (!q.empty())
    {
        pair<int, int> fr = q.front();
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int a = fr.first + d[i].first;
            int b = fr.second + d[i].second;
            if (valid(a, b))
            {
                q.push({a, b});
                vis[a][b] = true;
                par[a][b] = {fr.first, fr.second};
            }
        }
    }
}
int main()
{
    cin >> n >> m;
    pair<int, int> src;
    int di, dj;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            char x;
            cin >> x;
            adj[i][j] = x;
            if (x == 'R')
            {
                src = {i, j};
            }
            if (x == 'D')
            {
                di = i;
                dj = j;
            }
        }
    }
    memset(vis, false, sizeof(vis));
    memset(par, -1, sizeof(par));
    bfs(src);
    int a = di, b = dj;
    while (par[di][dj].first != -1 || par[di][dj].second != -1)
    {
        adj[di][dj] = 'X';
        pair<int, int> s = par[di][dj];
        di = s.first;
        dj = s.second;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i == a && j == b)
            {
                cout << 'D';
            }
            else
            {
                cout << adj[i][j];
            }
        }
        cout << endl;
    }
    return 0;
}