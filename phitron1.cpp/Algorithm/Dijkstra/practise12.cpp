#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
const int X = 100;
int mat[X][X];
bool vis[X][X];
int n, m;
vector<pair<int, int>> d = {{2, 1}, {1, 2}, {-1, 2}, {-2, 1}, {2, -1}, {1, -2}, {-1, -2}, {-2, -1}};
bool valid(int x, int y)
{
    if (x < 0 || x >= n || y < 0 || y >= m)
    {
        return false;
    }
    return true;
}
void bfs(pair<int, int> src)
{
    queue<pair<int, int>> q;
    q.push(src);
    vis[src.first][src.second] = true;
    mat[src.first][src.second] = 0;
    while (!q.empty())
    {
        pair<int, int> fr = q.front();
        q.pop();
        int x = fr.first;
        int y = fr.second;
        for (int i = 0; i < 8; i++)
        {
            int a = x + d[i].first;
            int b = y + d[i].second;
            if (valid(a, b) && vis[a][b] == false)
            {
                q.push({a, b});
                vis[a][b] = true;
                mat[a][b]=mat[x][y]+1;
            }
        }
    }
}
int main()
{
    int t;
    cin >> t;
    pair<int, int> src, dst;
    while (t--)
    {
        cin >> n >> m;
        int k1, k2;
        cin >> k1 >> k2;
        int q1, q2;
        memset(vis,false,sizeof(vis));
        memset(mat,-1,sizeof(mat));
        cin >> q1 >> q2;
        src = {k1, k2};
        bfs(src);
        dst = {q1, q2};
        if (mat[q1][q2] != -1)
        {
            cout << mat[q1][q2] << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}