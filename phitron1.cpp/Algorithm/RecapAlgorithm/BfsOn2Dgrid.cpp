#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int mat[20][20];
bool vis[20][20];
int dis[20][20];
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
void bfs(int si, int sj)
{
    queue<pair<int,int>>q;
    q.push({si,sj});
    vis[si][sj]=true;
    dis[si][sj]=0;
    while(!q.empty())
    {
        auto fr = q.front();
        q.pop();
        int x = fr.first;
        int y = fr.second;
        for(int i=0;i<4;i++)
        {
            int a = x+d[i].first;
            int b = y+d[i].second;
            if(valid(a,b)==true && vis[a][b]==false)
            {
                q.push({a,b});
                vis[a][b]=true;
                dis[a][b]=dis[x][y]+1;
            }
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
    memset(dis,-1,sizeof(dis));
    int si, sj;
    cin >> si >> sj;
    bfs(si, sj);
    return 0;
}