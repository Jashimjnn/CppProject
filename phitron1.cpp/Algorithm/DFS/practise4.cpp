#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
vector<int>v[1005];
bool vis[1005];
vector<int>v1;
void dfs(int src)
{
    v1.push_back(src);
    vis[src]=true;
    for(int child : v[src])
    {
        if(vis[child]==false)
        {
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
        v[a].push_back(b);
        v[b].push_back(a);
    }
    int src;
    cin>>src;
    memset(vis,false,sizeof(vis));
    dfs(src);
    cout<<v1.size()<<endl;
    return 0;
}