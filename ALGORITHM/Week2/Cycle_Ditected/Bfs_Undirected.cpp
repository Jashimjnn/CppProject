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
vector<ll>v[1005];
ll vis[1005];
ll parent[1005];
bool flag;
void bfs(ll src)
{
    queue<ll>q;
    q.push(src);
    vis[src] = true;
    while(!q.empty())
    {
        ll pr = q.front();
        q.pop();
        for(auto child:v[pr])
        {
            if(vis[child]==true && parent[child]!=child)
            {
                flag = true;
            }
            if(vis[child]==false)
            {
                q.push(child);
                vis[child] = true;
                parent[child] = pr;
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
        ll a,b;
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    memset(vis,false,sizeof(vis));
    memset(parent,-1,sizeof(parent));
    flag = false;
    for(int i=0;i<n;i++)
    {
        if(!vis[i])
        {
            bfs(i);
        }
    }
    if(flag==true)
    {
        cout<<"Cycle Ditected"<<endl;
    }
    else
    {
        cout<<"Not Cycle Ditected"<<endl;
    }
    return 0;
}