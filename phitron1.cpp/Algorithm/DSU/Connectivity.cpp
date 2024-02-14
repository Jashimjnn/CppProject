#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
const int X=1e5+5;
vector<int>adj[X];
bool vis[X];
int bfs(int src)
{
    int cnt=0;
    queue<int> q;
    q.push(src);
    vis[src] = true;
    //level[src] = 0;
    
    while (!q.empty())
    {
        cnt++;
        int fr = q.front();
        q.pop();
        for (int child : adj[fr])
        {
            if (!vis[child])
            {
                q.push(child);
                vis[child] = true;
                //level[child] = level[fr] + 1;
            }
        }
    }
    return cnt-1;
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
    int cnt=bfs(1);
    if(cnt==n-1)
    {
        Y;
        //cout<<cnt<<endl;
    }
    else
    {
        N;
       // cout<<cnt<<endl;
    }
    return 0;
}