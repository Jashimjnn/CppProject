#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
const int X = 1e5 + 5;
bool vis[X];
vector<int> adj[X];
int parentArray[X];
bool ans;
void dfs(int parent)
{
    vis[parent] = true;
    // cout << parent << endl;
    for (int child : adj[parent])
    {
        if (vis[child] == true && child != parentArray[parent])
        {
            ans = true;
            // cout << parent << " " << child << " " << parentArray[parent] << endl;
        }
        if (vis[child] == false)
        {
            parentArray[child] = parent;
            dfs(child);
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
        adj[a].push_back(b);
        //adj[b].push_back(a);
    }
    memset(vis, false, sizeof(vis));
    memset(parentArray, -1, sizeof(parentArray));
    ans = false;
    int cnt=1;
    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            dfs(i);
            cnt++;
        }
    }
    cout<<cnt<<endl;
    if (ans)
        cout << "Cycle detected";
    else
        cout << "Cycle not detected";
    return 0;
}