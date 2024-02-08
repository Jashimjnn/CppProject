#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
const int X = 1005;
vector<int> v[X];
bool vis[X];
int level[X];

void dfs(int src, int Level)
{
    vis[src] = true;
    level[src] = Level;
    
    for (auto child : v[src])
    {
        if (vis[child] == false)
        {
            dfs(child, Level + 1);
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
    memset(level, 0, sizeof(level));

    dfs(0, 0);
    for (int i = 0; i < n; i++)
    {
        cout << "Node " << i << " is at level " << level[i] << endl;
    }
    cout<<endl;
    cout << "Nodes Print according to level: ";
    for (int i = 0; i < n; i++)
    {
        if (level[i] == 3)
        {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}
