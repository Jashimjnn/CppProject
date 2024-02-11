#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
const int X = 1e5 + 5;
vector<int> v[X];
bool vis[X];
vector<int>path;
void dfs(int src)
{
    vis[src] = true;
    path.push_back(src);
    for (int child : v[src])
    {
        if (!vis[child])
        {
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
        v[a].push_back(b);
        v[b].push_back(a);
    }
    memset(vis, false, sizeof(vis));
    int ans;
    vector<int> v1;
    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            dfs(i);
            ans = path.size();
            v1.push_back(ans);
            path.clear();
        }
    }
    sort(v1.begin(), v1.end());
    for (auto x : v1)
    {
        cout << x << " ";
    }
    return 0;
}