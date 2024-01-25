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
void bfs(int src)
{
    queue<int>q;
    q.push(src);
    vis[src]=true;
    while(!q.empty())
    {
        int fr = q.front();
        q.pop();
        v1.push_back(fr);
        for(int child:v[fr])
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
        v[a].push_back(b);
        v[b].push_back(a);
    }
    memset(vis,false,sizeof(vis));
    bfs(0);
    sort(v1.begin(),v1.end());
    for(auto x:v1)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}