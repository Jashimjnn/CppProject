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
vector<pair<ll,ll>>v[1005];
ll dis[1005];
void Dijkstra(ll src)
{
    queue<pair<ll,ll>>q;
    q.push({src,0});
    dis[src] = 0;
    while(!q.empty())
    {
        pair<ll,ll>pr = q.front();
        q.pop();
        ll node = pr.first;
        ll cost = pr.second;
        for(pair<ll,ll>child :v[node])
        {
            ll childNode = child.first;
            ll childCost = child.second;
            if(cost+dis[childCost]<dis[childNode])
            {
                dis[childNode] = cost+dis[childCost];
                q.push({childNode,dis[childNode]});
            }
        }
    }
}
int main()
{
    ll n,e;
    cin>>n>>e;
    while(e--)
    {
        ll a,b,c;
        cin>>a>>b>>c;
        v[a].push_back({b,c});
        v[b].push_back({a,c});
    }
    for(int i=0;i<n;i++)
    {
        dis[i] = LLONG_MAX;
    }
    Dijkstra(0);
    for(int i=0;i<n;i++)
    {
        cout<<i<<"->"<<dis[i]<<endl;
    }
    return 0;
}