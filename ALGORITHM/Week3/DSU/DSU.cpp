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
ll level[1005];
ll group_size[1005];
ll par[1005];
void dsu_initialize(ll n)
{
    for (int i = 0; i < n; i++)
    {
        par[i] = -1;
        level[i] = 0;
        group_size[i] = 1;
    }
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
void dsu_union_by_level(ll node1, ll node2)
{
    ll leaderA = dsu_find(node1);
    ll leaderB = dsu_find(node2);
    if (level[leaderA] > level[leaderB])
    {
        par[leaderB] = leaderA;
    }
    else if (level[leaderB] > level[leaderA])
    {
        par[leaderA] = leaderB;
    }
    else
    {
        par[leaderA] = leaderB;
        level[leaderB]++;
    }
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
    dsu_initialize(7);
    dsu_union_by_level(1, 2);
    dsu_union_by_level(2, 3);
    dsu_union_by_level(4, 5);
    dsu_union_by_level(5, 6);
    dsu_union_by_level(1, 4);
    //dsu_union_by_size(1, 2);
    cout << dsu_find(1) << endl;
    cout << dsu_find(4) << endl;
    return 0;
}