#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
const int X = 1e5 + 5;
vector<int> v[X];
bool vis[X];
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
    memset(vis,false,sizeof(vis));
    dfs(0);
    for(auto x:v1)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}