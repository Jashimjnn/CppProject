// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// #define Y cout << "YES" << endl;
// #define N cout << "NO" << endl;
// const int X = 1005;
// char mat[X][X];
// char br[X][X];
// bool vis[X][X];
// int n, m;
// vector<char> path;
// vector<pair<int, int>> d = {{0, -1}, {0, 1}, {-1, 0}, {1, 0}};

// bool Valid(int x, int y)
// {
//     return x >= 0 && x < n && y >= 0 && y < m && mat[x][y] != '#' && !vis[x][y];
// }

// bool bfs(int x, int y)
// {
//     queue<pair<int, int>> q;
//     q.push({x, y});
//     vis[x][y] = true;

//     while (!q.empty())
//     {
//         pair<int, int> fr = q.front();
//         int a = fr.first;
//         int b = fr.second;
//         q.pop();

//         if (mat[a][b] == 'B')
//         {
//             while (1)
//             {
//                 path.push_back(br[a][b]);

//                 if (path.back() == 'L')
//                     b++;
//                 else if (path.back() == 'R')
//                     b--;
//                 else if (path.back() == 'U')
//                     a++;
//                 else if (path.back() == 'D')
//                     a--;

//                 if (a == x && b == y)
//                     break;
//             }
//             return true;
//         }

//         for (auto dir : d)
//         {
//             int new_x = a + dir.first;
//             int new_y = b + dir.second;
//             if(Valid(new_x, new_y) && dir == make_pair(0, -1))
//             {
//               br[new_x][new_y] = 'L';
//               q.push({new_x, new_y});
//               vis[new_x][new_y] = true;
//             }
//             if(Valid(new_x, new_y) && dir == make_pair(0, 1))
//             {
//               br[new_x][new_y] = 'R';
//               q.push({new_x, new_y});
//               vis[new_x][new_y] = true;
//             }
//             if(Valid(new_x, new_y) && dir == make_pair(-1,0))
//             {
//               br[new_x][new_y] = 'U';
//               q.push({new_x, new_y});
//               vis[new_x][new_y] = true;
//             }
//             if(Valid(new_x, new_y) && dir == make_pair(1,0))
//             {
//               br[new_x][new_y] = 'D';
//               q.push({new_x, new_y});
//               vis[new_x][new_y] = true;
//             }
//         }
//     }

//     return false;
// }

// int main()
// {
//     cin >> n >> m;
//     int src = -1, dst = -1;

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cin >> mat[i][j];
//             if (mat[i][j] == 'A')
//             {
//                 src = i;
//                 dst = j;
//             }
//         }
//     }

//     if (src != -1 && dst != -1 && bfs(src, dst))
//     {
//         Y;
//         cout << path.size() << endl;
//         while (!path.empty())
//         {
//             cout << path.back();
//             path.pop_back();
//         }
//     }
//     else
//     {
//         N;
//     }
//     cout << endl;
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;
const int N = 1005;
int vis[N][N];
pair<int, int> path[N][N];
vector<pair<int, int>> moves = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

int n, m;
int sx, sy, ex, ey;

bool isValid(int x, int y)
{
    return !vis[x][y] && (x >= 0) and (x < n) and (y >= 0) and (y < m);
}

void bfs()
{
    queue<pair<int, int>> q;
    q.push({sx, sy});
    vis[sx][sy] = true;
    while (!q.empty())
    {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        for (auto mv : moves)
        {
            int new_x = x + mv.first;
            int new_y = y + mv.second;
            if (isValid(new_x, new_y))
            {
                vis[new_x][new_y] = true;
                path[new_x][new_y] = {mv.first, mv.second};
                q.push({new_x, new_y});
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
            path[i][j] = {-1, -1};
            char c;
            cin >> c;
            if (c == '#')
            {
                vis[i][j] = true;
            }
            if (c == 'A')
            {
                sx = i;
                sy = j;
            }
            if (c == 'B')
            {
                ex = i;
                ey = j;
            }
        }
    }
    bfs();
    if (!vis[ex][ey])
    {
        cout << "NO" << endl;
        return 0;
    }
    cout << "YES" << endl;
    vector<pair<int, int>> ans;
    pair<int, int> dest = {ex, ey};

    while (dest.first != sx || dest.second != sy)
    {
        ans.push_back({path[dest.first][dest.second]});
        dest.first -= ans.back().first;
        dest.second -= ans.back().second;
    }
    cout<<ans.size()<<endl;
    reverse(ans.begin(), ans.end());
    // for (auto i : ans)
    // {
    //     cout << i.first << " " << i.second << endl;
    // }
    for (auto i : ans)
    {
        if (i.first == 1 and i.second == 0)
        {
            cout << "D";
        }
        if (i.first == -1 and i.second == 0)
        {
            cout << "U";
        }
        if (i.first == 0 and i.second == -1)
        {
            cout << "L";
        }
        if (i.first == 0 and i.second == 1)
        {
            cout << "R";
        }
    }
    return 0;
}