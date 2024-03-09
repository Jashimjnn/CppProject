#include <iostream>
#include <vector>
#include <cstring>
#include <algorithm>

using namespace std;

const int MAXN = 2e5 + 5;

vector<int> adj[MAXN];
int subtree_size[MAXN];
long long min_cost[MAXN];
int n;

void dfs(int v, int p) {
    subtree_size[v] = 1;
    min_cost[v] = 0;
    for (int u : adj[v]) {
        if (u != p) {
            dfs(u, v);
            subtree_size[v] += subtree_size[u];
            min_cost[v] += min_cost[u] + subtree_size[u];
        }
    }
}

void solve() {
    cin >> n;
    for (int i = 1; i <= n; ++i)
        adj[i].clear();

    for (int i = 0; i < n - 1; ++i) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    dfs(1, 0);

    vector<pair<int, int>> edges_to_add;
    for (int v = 2; v <= n; ++v) {
        edges_to_add.emplace_back(v, 1);
    }

    cout << min_cost[1] << " " << n - 1 << endl;
    for (auto edge : edges_to_add) {
        cout << edge.first << " " << edge.second << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
