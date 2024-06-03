#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
const int X = 1005;
char mat[X][X];
char br[X][X];
bool vis[X][X];
int n, m;
vector<char> path;
vector<pair<int, int>> d = {{0, -1}, {0, 1}, {-1, 0}, {1, 0}};

bool Valid(int x, int y)
{
    return x >= 0 && x < n && y >= 0 && y < m && mat[x][y] != '#' && !vis[x][y];
}

bool bfs(int x, int y)
{
    queue<pair<int, int>> q;
    q.push({x, y});
    vis[x][y] = true;

    while (!q.empty())
    {
        pair<int, int> fr = q.front();
        int a = fr.first;
        int b = fr.second;
        q.pop();

        if (mat[a][b] == 'B')
        {
            while (1)
            {
                path.push_back(br[a][b]);

                if (path.back() == 'L')
                    b++;
                else if (path.back() == 'R')
                    b--;
                else if (path.back() == 'U')
                    a++;
                else if (path.back() == 'D')
                    a--;

                if (a == x && b == y)
                    break;
            }
            return true;
        }

        for (auto dir : d)
        {
            int new_x = a + dir.first;
            int new_y = b + dir.second;

            if (Valid(new_x, new_y))
            {
                if (dir == make_pair(0, -1))
                    br[new_x][new_y] = 'L';
                else if (dir == make_pair(0, 1))
                    br[new_x][new_y] = 'R';
                else if (dir == make_pair(-1, 0))
                    br[new_x][new_y] = 'U';
                else
                    br[new_x][new_y] = 'D';

                q.push({new_x, new_y});
                vis[new_x][new_y] = true;
            }
        }
    }

    return false;
}

int main()
{
    cin >> n >> m;
    int src = -1, dst = -1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> mat[i][j];
            if (mat[i][j] == 'A')
            {
                src = i;
                dst = j;
            }
        }
    }

    if (src != -1 && dst != -1 && bfs(src, dst))
    {
        Y;
        cout << path.size() << endl;
        while (!path.empty())
        {
            cout << path.back();
            path.pop_back();
        }
    }
    else
    {
        N;
    }
    cout << endl;
    return 0;
}