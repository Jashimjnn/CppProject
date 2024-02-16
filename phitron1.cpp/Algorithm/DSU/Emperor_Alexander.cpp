#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
const ll X = 1e5 + 5;
ll parent[X];
ll group_size[X];
class Edge
{
public:
    ll u, v, w;
    Edge(ll u, ll v, ll w)
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
void dsu_initialize(int n)
{
    for (int i = 0; i < n; i++)
    {
        parent[i] = -1;
        group_size[i] = 1;
    }
}
ll dsu_find(ll node)
{
    if (parent[node] == -1)
    {
        return node;
    }
    ll leader = dsu_find(parent[node]);
    parent[node] = leader;
    return leader;
}
void dsu_union_by_size(ll node1, ll node2)
{
    ll leaderA = dsu_find(node1);
    ll leaderB = dsu_find(node2);
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

int main()
{
    ll n, e;
    cin >> n >> e;
    dsu_initialize(n);
    vector<Edge> E_List;
    while (e--)
    {
        ll u, v, w;
        cin >> u >> v >> w;
        E_List.push_back(Edge(u, v, w));
    }
    sort(E_List.begin(), E_List.end(), cmp);
    ll cst = 0;
    ll cnt = 0;
    ll rmv=0;
    for (Edge ed : E_List)
    {
        ll leaderU = dsu_find(ed.u);
        ll leaderV = dsu_find(ed.v);
        if (leaderU == leaderV)
        {
            rmv++;
            continue;
        }
        else
        {
            cnt++;
            dsu_union_by_size(ed.u, ed.v);
            cst += ed.w;
        }
    }
    if (cnt == n - 1)
    {
        cout <<rmv<<" "<< cst << endl;
    }
    else
    {
        cout << "Not Possible" << endl;
    }
    return 0;
}