/**
 *    author:  Mohammad Jashim Uddin
 **/
#include <iostream>
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define yy cout << "Yes" << endl;
#define N cout << "NO" << endl;
#define nn cout << "No" << endl;
#define one cout << "1" << endl;
#define onee cout << "-1" << endl;
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

vector<int> adj[1005];
stack<int> st;
bool vis[1005];
void dfs(int src)
{
    vis[src] = true;
    for (auto &x : adj[src])
    {
        if (!vis[x])
        {
            dfs(x);
        }
    }
    st.push(src);
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
    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            dfs(i);
        }
    }
    vector<int> v;
    while (!st.empty())
    {
        int x = st.top();
        st.pop();
        v.push_back(x);
    }
    for (auto e : v)
    {
        cout << e << " ";
    }
    return 0;
}