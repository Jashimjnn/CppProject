// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// #define Y cout << "YES" << endl;
// #define N cout << "NO" << endl;
// vector<int> v[10000005];
// bool vis[1000005];
// int par[1000005];
// void bfs(int src)
// {
//     queue<int> q;
//     q.push(src);
//     vis[src] = true;
//     while (!q.empty())
//     {
//         int fr = q.front();
//         q.pop();
//         for (int child : v[fr])
//         {
//             if (vis[child] == false)
//             {
//                 q.push(child);
//                 vis[child] = true;
//                 par[child] = fr;
//             }
//         }
//     }
// }
// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 0; i < n - 1; i++)
//     {
//         int a, b;
//         cin >> a >> b;
//         v[a].push_back(b);
//         v[b].push_back(a);
//     }
//     int q;
//     cin >> q;
//     int mn = INT_MAX;
//     while (q--)
//     {
//         int x, y;
//         cin >> x >> y;
//         memset(vis, false, sizeof(vis));
//         memset(par,-1,sizeof(par));
//         bfs(x);
//         int z=y;
//         vector<int>path;
//         while(z!=-1)
//         {
//           path.push_back(z);
//           z = par[z];
//         }
//         int sz = path.size()-1;
//         mn = min(mn,sz);
//     }
//     cout<<mn<<endl;
//     return 0;
// }
#include <iostream>
#include <vector>
#include <cstring>
#include <bits/stdc++.h>
using namespace std;

vector<int> adj[100005];
bool visited[100005];

int dfs(int node, int parent, int dest) {
    if (node == dest) return 0;

    visited[node] = true;
    for (int neighbor : adj[node]) {
        if (neighbor != parent && !visited[neighbor]) {
            int res = dfs(neighbor, node, dest);
            if (res != -1) return res + 1;
        }
    }

    return -1;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        // Resetting data
        for (int i = 1; i <= n; ++i) {
            adj[i].clear();
            visited[i] = false;
        }

        // Input edges
        for (int i = 0; i < n - 1; ++i) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        int k;
        cin >> k;

        int min_edges = INT_MAX;

        // For each pair of vertices, find the path and count edges
        while (k--) {
            int a, b;
            cin >> a >> b;

            // Reset visited array for the new pair of vertices
            memset(visited, false, sizeof(visited));

            // Perform DFS to find the path length between a and b
            int path_length = dfs(a, -1, b);

            // Update min_edges with the minimum path length
            min_edges = min(min_edges, path_length);
        }

        // Output the minimum number of colored edges
        cout << min_edges << endl;
    }

    return 0;
}
