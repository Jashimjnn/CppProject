#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
const int X = 1e5+5;
vector<int>v[X];
bool vis[X];
int level[X];
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
        for(int child : v[fr])
        {
            if(!vis[child])
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
    int src;
    cin>>src;
    bfs(0);
    vector<int>path;
    for(int i=0;i<n;i++)
    {
        if(level[i]==src)
        {
            path.push_back(i);
        }
    }
    reverse(path.begin(),path.end());
    for(auto x:path)
    {
        cout<<x<<" ";
    }
    return 0;
}