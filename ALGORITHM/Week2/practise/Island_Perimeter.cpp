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
bool vis[105][105];
ll ans = 0;
ll n, m;
vector<pair<ll, ll>> v{{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
bool valid(ll x, ll y)
{
    if (x >= 0 && x < n && y >= 0 && y < m)
    {
        return true;
    }
    return false;
}
void dfs(ll x, ll y, vector<vector<ll>> &grid)
{
    vis[x][y] = true;
    for (ll i = 0; i < 4; i++)
    {
        ll a = x + v[i].first;
        ll b = y + v[i].second;
        if (valid(a, b))
        {
            if (grid[a][b] == 0)
            {
                ans++;
            }
        }
        else
        {
            ans++;
        }
        if (valid(a, b) && !vis[a][b] && grid[a][b] == 1)
        {
            dfs(a, b, grid);
        }
    }
}
int main()
{
    n, m;
    cin >> n >> m;
    vector<vector<ll>> grid(n, vector<ll>(m));
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            cin>>grid[i][j];
        }
    }
    memset(vis, false, sizeof(vis));
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            if (!vis[i][j] && grid[i][j] == 1)
            {
                dfs(i, j, grid);
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}
