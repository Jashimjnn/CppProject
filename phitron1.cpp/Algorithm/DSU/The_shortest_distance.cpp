#include <iostream>
#include <vector>
#include <queue>
#include <cstring>

using namespace std;

const int X = 1005;
vector<int> v[X];
bool vis[X];
int level[X];

void bfs(int src)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;
    level[src] = 0;

    while (!q.empty())
    {
        int fr = q.front();
        q.pop();
        for (int child : v[fr])
        {
            if (!vis[child])
            {
                q.push(child);
                vis[child] = true;
                level[child] = level[fr] + 1;
            }
        }
    }
}

int main()
{
    int n, x;
    cin >> n >> x;

    // Input adjacency matrix
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            int val;
            cin >> val;
            if (val == 1 && i != j)
            {
                v[i].push_back(j);
            }
        }
    }

    memset(vis, false, sizeof(vis));
    memset(level, -1, sizeof(level));

    bfs(x);

    for (int i = 1; i <= n; i++)
    {
        if (i != x)
        {
            cout << level[i] << " ";
        }
        else
        {
            cout << "0 ";
        }
    }

    return 0;
}
