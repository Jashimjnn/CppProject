#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
const int X = 30;
char mat[X][X];
int vis[X][X];
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
int n;
bool valid(int x, int y)
{
    return !vis[x][y] && mat[x][y] != 'T' && x >= 0 && x < n && y >= 0 && y < n;
}

void bfs(pair<int, int> src)
{
    queue<pair<int, int>> q;
    q.push(src);
    vis[src.first][src.second] = 0;
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
                q.push({a, b});
                vis[a][b] = vis[x][y] + 1;
            }
        }
    }
}

int main()
{
    while (cin >> n)
    {
        pair<int, int> src, dst;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> mat[i][j];
                if (mat[i][j] == 'S')
                {
                    src = {i, j};
                }
                if (mat[i][j] == 'E')
                {
                    dst = {i, j};
                }
            }
        }
        bfs(src);
        cout << vis[dst.first][dst.second] << endl;
    }
    return 0;
}
