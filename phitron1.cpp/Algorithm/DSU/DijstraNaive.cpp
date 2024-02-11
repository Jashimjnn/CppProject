#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
const int X = 1e5+5;
vector<pair<int,int>>v[X];
bool vis[X];
int dis[X];
void dijstra(int src)
{
    queue<pair<int,int>>q;
    q.push({src,0});
    vis[src]=true;
    dis[src]=0;
    while(!q.empty())
    {
        pair<int,int> fr = q.front();
        int node = fr.first;
        int cst = fr.second;
        for(pair<int,int> child : v[node])
        {
            int childnd = child.first;
            int childcst = child.second;
            if(cst+childcst<dis[childnd])
            {
                dis[childnd] = cst+childcst;
                q.push({childnd,dis[childnd]});
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
        int a,b,c;
        cin>>a>>b>>c;
        v[a].push_back({b,c});
        v[b].push_back({a,c});
    }
    memset(vis,false,sizeof(vis));
    for(int i=0;i<n;i++)
    {
        dis[i]=INT_MAX;
    }
    dijstra(0);
    for(int i=0;i<n;i++)
    {
        cout<<i<<" "<<dis[i]<<endl;
    }
    return 0;
}