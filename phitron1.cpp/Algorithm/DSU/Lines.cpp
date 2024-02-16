#include <bits/stdc++.h>
using namespace std;

const int N = 41;
char adj[N][N];
bool vis[N][N];
pair<int, int> par[N][N];
int n;
vector<pair<int, int>> d = {{-1, 0}, {0, -1}, {0, 1}, {1, 0}};

bool valid(int i, int j)
{
    return i >= 0 && i < n && j >= 0 && j < n && !vis[i][j] && adj[i][j] != 'O';
}

void bfs(int si, int sj)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = true;

    while (!q.empty())
    {
        pair<int, int> parent = q.front();
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int ci = parent.first + d[i].first;
            int cj = parent.second + d[i].second;
            if (valid(ci, cj))
            {
                q.push({ci, cj});
                vis[ci][cj] = true;
                par[ci][cj] = {parent.first, parent.second};
            }
        }
    }
}

int main()
{
    cin >> n;
    int si, sj;
    int di, dj;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            char x;
            cin >> x;
            adj[i][j] = x;
            par[i][j] = {-1, -1};
            if (x == '@')
            {
                si = i;
                sj = j;
            }
            if (x == 'X')
            {
                di = i;
                dj = j;
            }
        }
    }

    bfs(si, sj);

    if (vis[di][dj])
    {
        cout << "Y" << endl;

        while (par[di][dj].first != -1 && par[di][dj].second != -1)
        {
            adj[di][dj] = '+';
            pair<int, int> s = par[di][dj];
            di = s.first;
            dj = s.second;
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << adj[i][j];
            }
            cout << endl;
        }
    }
    else
    {
        cout << "N" << endl;
    }

    return 0;
}