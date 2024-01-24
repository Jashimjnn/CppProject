#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
vector<int>v[1005];
bool vis[1005];
void dfs(int src)
{
    vis[src]=true;
    for(auto child:v[src])
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
    memset(vis,false,sizeof(vis));
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        if(vis[i]==false)
        {
            dfs(i);
            cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}