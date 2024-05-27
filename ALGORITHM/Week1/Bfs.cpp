#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
vector<ll>v[1005];
bool vis[1005];
void bfs(ll src)
{
    queue<ll>q;
    q.push(src);
    vis[src] = true;
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
    ll src;
    cin>>src;
    bfs(src);
    return 0;
}