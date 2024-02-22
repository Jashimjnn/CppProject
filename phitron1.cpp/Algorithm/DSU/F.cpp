#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int MAXN = 500005;

vector<int> adj[MAXN];
int a[MAXN], b[MAXN], c[MAXN], ans[MAXN];

void dfs(int u, int p) {
    b[u] = a[u];
    for (int v : adj[u]) {
        if (v != p) {
            dfs(v, u);
            b[u] += b[v];
            c[u] = max(c[u], b[v]);
        }
    }
    c[u] = max(c[u], a[u]);
}

void solve() {
    int n;
    cin >> n;
    
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
        adj[i].clear();
        b[i] = c[i] = ans[i] = 0;
    }

    for (int i = 0; i < n - 1; ++i) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    dfs(1, -1);

    for (int u = 1; u <= n; ++u) {
        ans[u] = b[1] - c[u] + a[u];
        cout << ans[u] << " ";
    }
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    for (int case_num = 1; case_num <= t; ++case_num) {
        cout << "Case " << case_num << ":" << endl;
        solve();
    }

    return 0;
}
