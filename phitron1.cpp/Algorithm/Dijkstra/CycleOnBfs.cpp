#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
vector<int>v[10005];
bool vis[10005];
vector<int> adj[10005];
int p[10005];
bool ans;
void bfs(int s)
{
    queue<int>q;
    q.push(s);
    vis[s]=true;
    while(!q.empty())
    {
        int pr = q.front();
        q.pop();
        for(int child : adj[pr])
        {
            if(vis[child]==true && p[pr]!=child)
            {
              ans = true;
            }
            if(vis[child]==false)
            {
                vis[child]=true;
                p[child]=pr;
                q.push(child);
            }
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
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    memset(vis,false,sizeof(vis));
    memset(p,-1,sizeof(p));
    ans = false;
    for(int i=0;i<n;i++)
    {
        if(!vis[i])
        {
            bfs(i);
        }
    }
    if(ans)
    {
        Y;
    }
    else
    {
        N;
    }
    return 0;
}