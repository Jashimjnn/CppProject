#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int mat[20][20];
bool vis[20][20];
int n, m;
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
bool valid(int x, int y)
{
    if (x < 0 || x >= n || y < 0 || y >= m)
    {
        return false;
    }
    return true;
}
void dfs(int si, int sj)
{
    cout << si << " " << sj;
    vis[si][sj] = true;
    for (int i = 0; i < 4; i++)
    {
        int ci = si + d[i].first;
        int cj = sj + d[i].second;
        if (valid(ci, cj) == true && vis[ci][cj] == false)
        {
            dfs(ci, cj);
        }
    }
}
int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> mat[i][j];
        }
    }
    memset(vis, false, sizeof(vis));
    int si, sj;
    cin >> si >> sj;
    dfs(si, sj);
    return 0;
}