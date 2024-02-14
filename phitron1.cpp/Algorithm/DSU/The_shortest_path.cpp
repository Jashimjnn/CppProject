#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
const int MAX_N = 50005;
vector<int> graph[MAX_N];
bool visited[MAX_N];
int parent[MAX_N];
int dist[MAX_N];

void bfs(int start, int end)
{
    queue<int> q;
    q.push(start);
    visited[start] = true;
    dist[start] = 0;
    parent[start] = -1;

    while (!q.empty())
    {
        int current = q.front();
        q.pop();

        if (current == end)
        {
            break;
        }

        for (int neighbor : graph[current])
        {
            if (!visited[neighbor])
            {
                q.push(neighbor);
                visited[neighbor] = true;
                dist[neighbor] = dist[current] + 1;
                parent[neighbor] = current;
            }
        }
    }
}

void printShortestPath(int start, int end)
{
    if (!visited[end])
    {
        cout << "-1\n";
    }
    else
    {
        vector<int> path;
        for (int v = end; v != -1; v = parent[v])
        {
            path.push_back(v);
        }
        reverse(path.begin(), path.end());

        cout << path.size() - 1 << endl;
        for (int v : path)
        {
            cout << v << " ";
        }
    }
}

int main()
{
    int n, m;
    cin >> n >> m;

    int a, b;
    cin >> a >> b;
    for (int i = 0; i < m; ++i)
    {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    memset(visited, false, sizeof(visited));
    memset(parent, -1, sizeof(parent));
    memset(dist, -1, sizeof(dist));

    bfs(a, b);

    printShortestPath(a, b);

    return 0;
}
