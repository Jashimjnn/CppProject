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
void dsu(int n)
{
    for (int i = 0; i < n; i++)
    {
        par[i] = -1;
        group_size[i] = 1;
        level[i] = 0;
    }
    // par[1]=2;
    // par[2]=3;

    // par[5]=6;
    // par[6]=7;
}
int find(int nd)
{
    if (par[nd] == -1)
    {
        return nd;
    }
    int leader = find(par[nd]);
    par[nd] = leader;
    return leader;
}
// void Dsu_union(int nd1,int nd2)
// {
//    int a = find(nd1);
//    int b = find(nd2);
//    par[a] = b;

// }
void dsu_union_by_level(int nd1, int nd2)
{
    int a = find(nd1);
    int b = find(nd2);
    if (level[a] > level[b])
    {
        par[b] = a;
    }
    else if (level[b] > a)
    {
        par[a] = b;
    }
    else
    {
        par[a] = b;
        level[b]++;
    }
}
// Some code
// void dsu_union_by_size(int node1, int node2)
// {
//     int leaderA = find(node1);
//     int leaderB = find(node2);
//     if (group_size[leaderA] > group_size[leaderB])
//     {
//         par[leaderB] = leaderA;
//         group_size[leaderA] += group_size[leaderB];
//     }
//     else
//     {
//         par[leaderA] = leaderB;
//         group_size[leaderB] += group_size[leaderA];
//     }
// }
int main()
{
    // dsu(8);
    // cout<<find(1)<<endl;
    // Dsu_union(1,5);
    // cout<<find(1)<<endl;

    // for(int i=1;i<=7;i++)
    // {
    //     cout<<par[i]<<" ";
    // }

    // dsu_union_by_size
    dsu(7);
    dsu_union_by_level(1, 2);
    dsu_union_by_level(2, 3);
    dsu_union_by_level(4, 5);
    dsu_union_by_level(5, 6);
    dsu_union_by_level(1, 4);
    cout << find(1) << endl;
    cout << find(4) << endl;
    return 0;
}