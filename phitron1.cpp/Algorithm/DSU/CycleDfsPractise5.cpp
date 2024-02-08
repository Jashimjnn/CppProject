#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
const int X = 1e5+5;
vector<int>adj[X];
bool vis[X];
int par[X];
bool flag = false;
void dfs(int src)
{
    vis[src]=true;
    for(int child : adj[src])
    {
        if(vis[child]==true && par[child]!=src)
        {
            flag = true;
        }
        if(!vis[child])
        {
            vis[child]=true;
            par[child]=src;
            dfs(child);
        }
    }
}
int main()
{
    int n,e;
    cin>>n>>e;
    while(e--)
    {
        int a,b;
        cin>>a>>b;
        adj[a].push_back(a);
        adj[b].push_back(a);
    }
    memset(vis,false,sizeof(vis));
    memset(par,-1,sizeof(par));
    for(int i=0;i<n;i++)
    {
        if(!vis[i])
        {
            dfs(i);
        }
    }
    if(flag)
    {
        cout<<"Cycle Found"<<endl;
    }
    else
    {
        cout<<"Cycle Not Found"<<endl;
    }
    return 0;
}