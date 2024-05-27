#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
vector<ll>v[1005];
bool vis[1005];
void dfs(ll src)
{
    cout<<src<<" ";
    vis[src] = true;
    for(auto child:v[src])
    {
        if(vis[child]==false)
        {
            dfs(child);
        }
    }
    cout<<endl;
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
    dfs(0);
    return 0;
}