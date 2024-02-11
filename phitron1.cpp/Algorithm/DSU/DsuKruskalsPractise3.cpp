#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
const int X = 1e5 + 5;
int par[X];
int group_size[X];
int level[X];
void dsu_initialize(int n)
{
    for (int i = 0; i < n; i++)
    {
        par[i] = -1;
        group_size[i] = 1;
        level[i] = 0;
    }
}
int dsu_find(int node)
{
    if (par[node] == -1)
    {
        return node;
    }
    int leader = dsu_find(par[node]);
    par[node] = leader;
    return leader;
}
void dsu_Union_By_Size(int node1, int node2)
{
    int leaderA = dsu_find(node1);
    int leaderB = dsu_find(node2);
    if (group_size[leaderA] > group_size[leaderB])
    {
        par[leaderB] = leaderA;
        group_size[leaderA] += group_size[leaderB];
    }
    else
    {
        par[leaderA] = leaderB;
        group_size[leaderB] += group_size[leaderA];
    }
}
class Edge
{
public:
    int u, v, w;
    Edge(int u, int v, int w)
    {
        this->u = u;
        this->v = v;
        this->w = w;
    }
};
bool cmp(Edge a, Edge b)
{
    return a.w < b.w;
}
int main()
{
    int n, e;
    cin >> n >> e;
    dsu_initialize(n);
    vector<Edge> E_List;
    while (e--)
    {
        int u, v, w;
        cin >> u >> v >> w;
        E_List.push_back(Edge(u, v, w));
    }
    sort(E_List.begin(), E_List.end(), cmp);
    bool flag = false;
    int cst = 0;
    for (Edge ed : E_List)
    {
        int leaderA = dsu_find(ed.u);
        int leaderB = dsu_find(ed.v);
        if (leaderA == leaderB)
        {
            continue;
        }
        else
        {
            dsu_Union_By_Size(ed.u, ed.v);
            cst += ed.w;
        }
    }
    cout << cst << endl;
    return 0;
}