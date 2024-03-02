#include <bits/stdc++.h>
using namespace std;
const int X = 1005;
char mat[X][X];
bool visited[X][X];
pair<int, int> parent[X][X];
int n, m;
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};

bool valid(int x, int y)
{
    return x >= 0 && x < n && y >= 0 && y < m && !visited[x][y] && mat[x][y] != '#';
}
void bfs(pair<int, int> src)
{
    queue<pair<int, int>> q;
    q.push(src);
    visited[src.first][src.second] = true;

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
                visited[a][b] = true;
                parent[a][b] = {fr.first, fr.second};
            }
        }
    }
}
int main()
{
    cin >> n >> m;
    pair<int, int> src;
    int di, dj;
    int x,y;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            char x;
            cin >> x;
            mat[i][j] = x;
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
    memset(visited, false, sizeof(visited));
    memset(parent, -1, sizeof(parent));
    bfs(src);
    x = di;
    y = dj;
    while (parent[di][dj].first != -1 || parent[di][dj].second != -1)
    {
        mat[di][dj] = 'X';
        pair<int, int> s = parent[di][dj];
        di = s.first;
        dj = s.second;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i != x || j != y)
            {
                cout << mat[i][j];
                
            }
            else
            {
                cout << 'D';
            }
        }
        cout << endl;
    }
    return 0;
}