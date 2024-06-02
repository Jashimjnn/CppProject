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
class Edge
{
public:
    ll u;
    ll v;
    ll c;
    Edge(ll u, ll v, ll c)
    {
        this->u = u;
        this->v = v;
        this->c = c;
    }
};
ll dis[1005];
int main()
{
    ll n,e;
    cin>>n>>e;
    vector<Edge>Edge_list;
    while(e--)
    {
        ll a,b,c;
        cin>>a>>b>>c;
        Edge_list.push_back(Edge(a,b,c));
    }
    for(int i=0;i<n;i++)
    {
        dis[i] = LLONG_MAX;
    }
    for(int i=1;i<=n-1;i++)
    {
        for(auto ed:Edge_list)
        {
            ll u;
            ll v;
            ll c;
            ed.u = u;
            ed.v = v;
            ed.c=c;
            if(dis[u]<LLONG_MAX && c+dis[u]<dis[v])
            {
                dis[v] = c+dis[u];
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<i<<"->"<<dis[i]<<endl;
    }
    return 0;
}