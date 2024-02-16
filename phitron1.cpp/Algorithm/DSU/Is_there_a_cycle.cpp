#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
bool vis[N];
bool pathVisit[N];
vector<int> adj[N];
bool ans;
void dfs(int parent)
{
    vis[parent] = true;
    pathVisit[parent] = true;
    for (int child : adj[parent])
    {
        if (pathVisit[child])
        {
            ans = true;
        }
        if (!vis[child])
        {
            dfs(child);
        }
    }
    // kaj sesh
    pathVisit[parent] = false;
}
int main()
{
    int n;
    cin >> n;
    int mat[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>mat[i][j];
            if(mat[i][j]==1 && i!=j)
            {
                adj[i].push_back(j);
            }
        }
    }
    memset(vis, false, sizeof(vis));
    memset(pathVisit, false, sizeof(pathVisit));
    ans = false;
    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            dfs(i);
        }
    }
    if (ans)
        cout << "1";
    else
        cout << "0";
    return 0;
}