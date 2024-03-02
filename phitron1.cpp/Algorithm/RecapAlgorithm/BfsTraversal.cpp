#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
const int X = 1e5+5;
vector<int>adj[X];
bool vis[X];
void bfs(int src)
{
    queue<int>q;
    q.push(src);
    vis[src]=true;
    while(!q.empty())
    {
        int fr = q.front();
        q.pop();
        cout<<fr<<" ";
        for(int child :adj[fr])
        {
            if(vis[child]==false)
            {
                q.push(child);
                vis[child]=true;
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
    bfs(0);
    return 0;
}