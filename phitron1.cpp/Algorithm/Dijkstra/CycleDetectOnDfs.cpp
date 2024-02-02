#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
const int X = 1e5 + 5;
bool vis[X];
bool pathVisit[X];
vector<int> adj[X];
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
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
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
        cout << "Cycle detected";
    else
        cout << "Cycle not detected";
    return 0;
}