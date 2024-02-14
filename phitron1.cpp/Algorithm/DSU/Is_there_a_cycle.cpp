#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
const int X = 60;
vector<int> adj[X];
bool vis[X];
int par[X];
bool flag = false;

void dfs(int src, int parent)
{
    vis[src] = true;
    par[src] = parent;
    for (int child : adj[src])
    {
        if (!vis[child])
        {
            dfs(child, src);
        }
        else if (par[child] != child)
        {
            flag = true;
        }
    }
}

int main()
{
    int n;
    cin >> n;

    int mat[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> mat[i][j];
            if (mat[i][j] == 1 && i != j)
            {
                adj[i].push_back(j);
            }
        }
    }

    memset(vis, false, sizeof(vis));
    //memset(par, -1, sizeof(par));

    for (int i = 1; i <= n; i++)
    {
        if (!vis[i])
        {
            dfs(i, -1);
        }
    }

    if (flag)
    {
        cout << "1"<<endl;
    }
    else
    {
        cout << "0"<<endl;
    }

    return 0;
}