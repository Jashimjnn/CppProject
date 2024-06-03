#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
const int X = 100;
bool vis[X][X];
int mat[X][X];
vector<pair<int, int>> d = {{2, 1}, {1, 2}, {-1, 2}, {-2, 1}, {2, -1}, {1, -2}, {-1, -2}, {-2, -1}};
int n, m;
char a[X][X];
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
        int x = fr.first;
        int y = fr.second;
        q.pop();
        for (int i = 0; i < 8; i++)
        {
            int a = x + d[i].first;
            int b = y + d[i].second;
            if (valid(a,b) == true && vis[a][b] == false)
            {
                q.push({a,b});
                vis[a][b] = true;
                mat[a][b] = mat[x][y] + 1;
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
        pair<int, int> src;
        cin >> n >> m;
        int k1, k2;
        cin >> k1 >> k2;
        int q1, q2;
        cin >> q1 >> q2;
        memset(vis, false, sizeof(vis));
        memset(mat, -1, sizeof(mat));
        src={k1,k2};
        bfs(src);
        if(mat[q1][q2]!=-1)
        {
         cout << mat[q1][q2] << endl;
        }
        else
        {
            cout<<-1<<endl;
        }
    }
    return 0;
}