#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
vector<int> mat[1005];
bool vis[1005];
int level[1005];
void bfs(int src)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;
    level[src]=0;
    while (!q.empty())
    {
        int pr = q.front();
        q.pop();
        //cout << pr << endl;
        for (int child : mat[pr])
        {
            if(vis[child]==false)
            {
              q.push(child);
              vis[child]=true;
              level[child]=level[pr]+1;
            }
        }
    }
}
int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        mat[a].push_back(b);
        mat[b].push_back(a);
    }
    int src;
    cin >> src;
    memset(vis, false, sizeof(vis));
    memset(level, -1, sizeof(level));
    bfs(src);
    for(int i=0;i<n;i++)
    {
        cout<<i<<" "<<level[i]<<endl;;
    }
    cout<<endl;
    return 0;
}