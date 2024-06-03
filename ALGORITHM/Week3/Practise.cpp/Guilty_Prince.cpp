#include <bits/stdc++.h>
using namespace std;
char mat[25][25];
bool vis[25][25];
int n, m;
int cnt;
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
bool validd(int x, int y)
{
    if (x < 0 || x >= m || y < 0 || y >= n || mat[x][y] == -1)
    {
        return false;
    }
    else
    {
        return true;
    }
}
void dfs(pair<int, int> src)
{
    cnt++;
    vis[src.first][src.second] = true;
    int x = src.first;
    int y = src.second;
    for (int i = 0; i < 4; i++)
    {

        int a = x + d[i].first;
        int b = y + d[i].second;
        if (validd(a, b) && !vis[a][b])
        {
            dfs({a, b});
        }
    }
}
int main()
{
    int t;
    cin >> t;
    for (int k = 1; k <= t; k++)
    {
        pair<int, int> src;
        cin >> n >> m;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> mat[i][j];
                if (mat[i][j] == '#')
                {
                    mat[i][j] = -1;
                }
                if (mat[i][j] == '@')
                {
                    src = {i, j};
                }
            }
        }
        cnt = 0;
        memset(vis, false, sizeof(vis));
        dfs(src);

        cout << "Case " << k << ": " << cnt << endl;
    }

    return 0;
}