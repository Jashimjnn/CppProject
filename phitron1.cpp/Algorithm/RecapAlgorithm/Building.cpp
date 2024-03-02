#include <bits/stdc++.h>
using namespace std;
const int X = 1e5 + 5;
int parent[X];
int group_size[X];
int cost = 0;
int node = 0;
void dsu_initialize(int n)
{
    for (int i = 0; i < n; i++)
    {
        parent[i] = -1;
        group_size[i] = 1;
    }
}
int dsu_find(int node)
{
    if (parent[node] == -1)
    {
        return node;
    }
    int leader = dsu_find(parent[node]);
    parent[node] = leader;
    return leader;
}
void dsu_union_by_size(int node1, int node2)
{
    int leaderA = dsu_find(node1);
    int leaderB = dsu_find(node2);
    if (group_size[leaderA] > group_size[leaderB])
    {
        parent[leaderB] = leaderA;
        group_size[leaderA] += group_size[leaderB];
    }
    else
    {
        parent[leaderA] = leaderB;
        group_size[leaderB] += group_size[leaderA];
    }
}
class Edge
{
public:
    int u, v, c;
    Edge(int u, int v, int c)
    {
        this->u = u;
        this->v = v;
        this->c = c;
    }
};
bool cmp(Edge a, Edge b)
{
    return a.c < b.c;
}
int main()
{
    int n, e;
    cin >> n >> e;
    dsu_initialize(n);
    vector<Edge> Edge_List;
    while (e--)
    {
        int u, v, c;
        cin >> u >> v >> c;
        Edge_List.push_back(Edge(u, v, c));
    }
    sort(Edge_List.begin(), Edge_List.end(), cmp);
    for (Edge ed : Edge_List)
    {
        int leaderU = dsu_find(ed.u);
        int leaderV = dsu_find(ed.v);
        if (leaderU == leaderV)
        {
            continue;
        }
        else
        {
            node++;
            dsu_union_by_size(ed.u, ed.v);
            cost += ed.c;
        }
    }
    if (node != n - 1)
    {
        cout << -1 << endl;
        
    }
    else
    {
        cout << cost << endl;
    }
    return 0;
}