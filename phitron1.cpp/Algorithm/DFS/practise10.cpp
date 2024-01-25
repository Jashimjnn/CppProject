#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
const int X = 20;
int mat[X][X];
int vis[X][X];
int dx[4] = {0, 0, -1, 1};
int dy[4] = {1, -1, 0, 0};
int n, m;
bool valid(int x, int y)
{
    
    return !vis[x][y] && mat[x][y] != -1 && x >= 0 && x < n && y >= 0 && y < m;
}
void bfs(pair<int, int> src)
{
    queue<pair<int, int>> q;
    q.push(src);
    vis[src.first][src.second] = true;
    while (!q.empty())
    {
        auto p = q.front();
        q.pop();
        int x = p.first;
        int y = p.second;
        for (int i = 0; i < 4; i++)
        {
            int new_x = x + dx[i];
            int new_y = y + dy[i];
            if (valid(new_x, new_y))
            {
                q.push({new_x, new_y});
                vis[new_x][new_y] = true;
            }
        }
    }
}
int main()
{
    cin >> n >> m;
    pair<int, int> src, dst;
    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str;
        for (int j = 0; j < m; j++)
        {
            if (str[j] == '#')
            {
                mat[i][j] = -1;
            }
            if (str[j] == 'A')
            {
                src = {i, j};
            }
            if (str[j] == 'B')
            {
                dst = {i, j};
            }
        }
    }
    bfs(src);
    if (vis[dst.first][dst.second] == true)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}