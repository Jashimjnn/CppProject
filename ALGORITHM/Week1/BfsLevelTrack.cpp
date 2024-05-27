#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
vector<ll>v[1005];
bool vis[1005];
ll level[1005];
void bfs(ll src)
{
    queue<ll>q;
    q.push(src);
    vis[src] = true;
    level[src] = 0;
    while(!q.empty())
    {
        ll pr = q.front();
        q.pop();
        cout<<pr<<" ";
        for(auto child:v[pr])
        {
            if(vis[child]==false)
            {
                q.push(child);
                vis[child]=true;
                level[child] = level[pr]+1;
            }
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
    ll src;
    cin>>src;
    bfs(src);
    for(int i=0;i<n;i++)
    {
        cout<<i<<" "<<level[i]<<endl;
    }
    return 0;
}