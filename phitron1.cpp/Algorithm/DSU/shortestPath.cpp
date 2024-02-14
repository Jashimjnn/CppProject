#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;

const int X = 2005;
vector<pair<int, int>> v[X];
int dis[X];

void dijkstra(int src, int n)
{
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0, src});
    dis[src] = 0;

    while (!pq.empty())
    {
        int node = pq.top().second;
        int cst = pq.top().first;
        pq.pop();

        for (pair<int, int> edge : v[node])
        {
            int child = edge.first;
            int weight = edge.second;
            if (dis[node] + weight < dis[child])
            {
                dis[child] = dis[node] + weight;
                pq.push({dis[child], child});
            }
        }
    }
}

int main()
{
    int n, m;
    cin >> n >> m;

    int src, dst;
    cin >> src >> dst;

    while (m--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        v[a].push_back({b, c});
        v[b].push_back({a, c});
    }

    for (int i = 1; i <= n; i++)
    {
        dis[i] = INT_MAX;
    }

    dijkstra(src, n);

    if (dis[dst] == INT_MAX)
    {
        cout << "-1\n";
    }
    else
    {
        cout << dis[dst] << "\n";

        vector<int> path;
        int current = dst;
        while (current != src)
        {
            path.push_back(current);
            for (pair<int, int> edge : v[current])
            {
                int prevNode = edge.first;
                int weight = edge.second;
                if (dis[current] == dis[prevNode] + weight)
                {
                    current = prevNode;
                    break;
                }
            }
        }
        path.push_back(src);

        for (int i = path.size() - 1; i >= 0; i--)
        {
            cout << path[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}
