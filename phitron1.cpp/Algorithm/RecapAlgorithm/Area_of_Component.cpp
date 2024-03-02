// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// #define Y cout << "YES" << endl;
// #define N cout << "NO" << endl;
// const int X = 1005;
// int mat[X][X];
// int vis[X][X];
// vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
// int n, m;
// vector<int> v;
// bool valid(int x, int y)
// {
//     return !vis[x][y] && mat[x][y] != -1 && x >= 0 && x < n && y >= 0 && y < m;
// }

// int bfs(pair<int, int> src)
// {
//     int cnt = 0;
//     queue<pair<int, int>> q;
//     q.push(src);
//     vis[src.first][src.second] = true;

//     while (!q.empty())
//     {
//         auto fr = q.front();
//         q.pop();
//         int x = fr.first;
//         int y = fr.second;
//         cnt++;
//         for (int i = 0; i < 4; i++)
//         {
//             int a = x + d[i].first;
//             int b = y + d[i].second;

//             if (valid(a, b))
//             {
//                 q.push({a, b});
//                 vis[a][b] = true;
//             }
//         }
//     }
//     return cnt;
// }
// int main()
// {
//     cin >> n >> m;

//     for (int i = 0; i < n; i++)
//     {
//         string str;
//         cin >> str;

//         for (int j = 0; j < m; j++)
//         {
//             if (str[j] == '-')
//             {
//                 mat[i][j] = -1;
//             }
//         }
//     }

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             if (!vis[i][j] && mat[i][j] != -1)
//             {
//                 int x = bfs({i, j});
//                 v.push_back(x);
//             }
//         }
//     }

//     if (v.size() == 0)
//     {
//         cout << -1 << endl;
//     }
//     else
//     {
//         int mn = INT_MAX;
//         for (auto va : v)
//         {
//             if (va < mn)
//             {
//                 mn = va;
//             }
//         }
//         cout << mn << endl;
//     }
//     return 0;
// }



#include <bits/stdc++.h>
using namespace std;
const int X = 1005;
int mat[X][X];
int vis[X][X];
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
int n, m;
vector<int> path;
bool valid(int x, int y)
{
    return !vis[x][y] && mat[x][y] != -1 && x >= 0 && x < n && y >= 0 && y < m;
}

int dfs(pair<int, int> src)
{
    int cnt = 1;
    vis[src.first][src.second] = true;

    for (int i = 0; i < 4; i++)
    {
        int a = src.first + d[i].first;
        int b = src.second + d[i].second;

        if (valid(a, b))
        {
            cnt += dfs({a, b}); 
        }
    }
    return cnt;
}

int main()
{
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str;

        for (int j = 0; j < m; j++)
        {
            if (str[j] == '-')
            {
                mat[i][j] = -1;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (!vis[i][j] && mat[i][j] != -1)
            {
                int x = dfs({i, j});
                path.push_back(x);
            }
        }
    }

    if (path.size() != 0)
    {
        int min_value = INT_MAX;
        for (auto v : path)
        {
            if (v < min_value)
            {
                min_value = v;
            }
        }
        cout << min_value << endl;
    }
    else
    {
        cout << -1 << endl;
    }
    return 0;
}
