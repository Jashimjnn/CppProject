#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
const int X = 10005;
int mat[X][X];
int vis[X][X];
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
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
        auto fr = q.front();
        q.pop();
        int x = fr.first;
        int y = fr.second;
        for (int i = 0; i < 4; i++)
        {
            int a = x + d[i].first;
            int b = y + d[i].second;
            if (valid(a, b))
            {
                q.push({a,b});
                vis[a][b] = true;
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