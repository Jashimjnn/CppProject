#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
vector<int>v[1005];
bool vis[1005];
int level[1005];
void bfs(int src)
{
    queue<int>q;
    q.push(src);
    vis[src]=true;
    level[src]=0;
    while(!q.empty())
    {
        int fr = q.front();
        q.pop();
        for(int child:v[fr])
        {
            if(vis[child]==false)
            {
                q.push(child);
                vis[child]=true;
                level[child]=level[fr]+1;
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
        v[a].push_back(b);
        v[b].push_back(a);
    }
    memset(vis,false,sizeof(vis));
    memset(level,-1,sizeof(level));
    bfs(0);
    for(int i=0;i<n;i++)
    {
        cout<<level[i]<<" ";
    }
    return 0;
}