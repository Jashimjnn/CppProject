/**
 *    author:  Mohammad Jashim Uddin
 **/
#include <iostream>
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define yy cout << "Yes" << endl;
#define N cout << "NO" << endl;
#define nn cout << "No" << endl;
#define one cout << "1" << endl;
#define onee cout << "-1" << endl;
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
ll par[1005];
ll group_size[1005];
void dsu_initialization(ll n)
{
    for (int i = 0; i < n; i++)
    {
        par[i] = -1;
        group_size[i] = 1;
    }
}
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
ll dsu_find(ll node)
{
    if (par[node] == -1)
    {
        return node;
    }
    ll leader = dsu_find(par[node]);
    par[node] = leader;
    return leader;
}
void dsu_union_by_size(ll node1,ll node2)
{
    ll leaderA = dsu_find(node1);
    ll leaderB = dsu_find(node2);
    if(group_size[leaderA]>group_size[leaderB])
    {
        par[leaderB] = leaderA;
        group_size[leaderA]+=group_size[leaderB];
    }
    else
    {
        par[leaderA] = leaderB;
        group_size[leaderB]+=group_size[leaderA];
    }
}
int main()
{
    ll n, e;
    cin >> n >> e;
    dsu_initialization(n);
    vector<Edge> Edge_list;
    while (e--)
    {
        ll u, v, w;
        cin >> u >> v >> w;
        Edge_list.push_back(Edge(u, v, w));
    }
    sort(Edge_list.begin(), Edge_list.end(), cmp);
    ll cst = 0;
    for (Edge ed : Edge_list)
    {
        ll leaderU = dsu_find(ed.u);
        ll leaderV = dsu_find(ed.v);
        if(leaderU==leaderV)
        {
          continue;
        }
        else
        {
            dsu_union_by_size(ed.u,ed.v);
            cst+=ed.w;
        }
    }
    cout<<cst<<endl;
    return 0;
}