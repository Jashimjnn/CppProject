#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int MAXN = 100005;

vector<int> adj[MAXN];
int depth[MAXN];

void dfs(int u, int parent, int& maxDepth) {
    depth[u] = 0;

    for (int v : adj[u]) {
        if (v != parent) {
            dfs(v, u, maxDepth);
            depth[u] = max(depth[u], depth[v]+1);
        }
    }

    maxDepth = max(maxDepth, depth[u]);
}

int minZeldaOperations(int n) {
    int maxDepth = 0;
    dfs(1, 0, maxDepth);

    return (maxDepth+1) / 2;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;


        for (int i = 1; i <= n; ++i) {
            adj[i].clear();
        }


        for (int i = 1; i < n; ++i) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }


        cout << minZeldaOperations(n) << endl;
    }

    return 0;
}
