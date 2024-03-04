#include <bits/stdc++.h>
using namespace std;
const long long int X = 1e5 + 5;
long long int parent[X];
long long int group_size[X];
void dsu_initialize(long long int n)
{
    for (int i = 0; i < n; i++)
    {
        parent[i] = -1;
        group_size[i] = 1;
    }
}
long long int dsu_find(long long int node)
{
    if (parent[node] == -1)
    {
        return node;
    }
    long long int leader = dsu_find(parent[node]);
    parent[node] = leader;
    return leader;
}
void dsu_union_by_size(long long int node1, long long int node2)
{
    long long int leaderA = dsu_find(node1);
    long long int leaderB = dsu_find(node2);
    if (group_size[leaderA] <= group_size[leaderB])
    {
        parent[leaderA] = leaderB;
        group_size[leaderB] += group_size[leaderA];
    }
    else
    {
        parent[leaderB] = leaderA;
        group_size[leaderA] += group_size[leaderB];
    }
}
class Edge
{
public:
    long long int u, v, c;
    Edge(long long int u, long long int v, long long int c)
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
    long long int n, e;
    cin >> n >> e;
    long long int cost = 0;
    long long int count_node = 0;
    long long int remove_node=0;
    dsu_initialize(n);
    vector<Edge> Edge_List;
    while (e--)
    {
        long long int u, v, c;
        cin >> u >> v >> c;
        Edge_List.push_back(Edge(u, v, c));
    }
    sort(Edge_List.begin(), Edge_List.end(), cmp);
    for (Edge ed : Edge_List)
    {
        long long int leaderU = dsu_find(ed.u);
        long long int leaderV = dsu_find(ed.v);
        if (leaderU == leaderV)
        {
            remove_node++;
            continue;
        }
        else
        {
            dsu_union_by_size(ed.u, ed.v);
            count_node++;
            cost += ed.c;
        }
    }
    if (count_node == n - 1)
    {
        cout <<remove_node<<" "<< cost << endl;
    }
    else
    {
        cout << "Not Possible" << endl;
    }
    return 0;
}