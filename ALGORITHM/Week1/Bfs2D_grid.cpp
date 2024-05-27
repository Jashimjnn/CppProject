#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
bool vis[20][20];
ll dis[20][20];
vector<pair<ll, ll>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
ll n, m;
char a[20][20];
bool valid(ll i, ll j)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
        return false;
    return true;
}

void bfs(ll si, ll sj)
{
    queue<pair<ll, ll>> q;
    q.push({si, sj});
    vis[si][sj] = true;
    dis[si][sj] = 0;
    while (!q.empty())
    {
        pair<ll, ll> par = q.front();
        ll a = par.first, b = par.second;
        q.pop();
        for (ll i = 0; i < 4; i++)
        {
            ll ci = a + d[i].first;
            ll cj = b + d[i].second;
            if (valid(ci, cj) == true && vis[ci][cj] == false)
            {
                q.push({ci, cj});
                vis[ci][cj] = true;
                dis[ci][cj] = dis[a][b] + 1;
            }
        }
    }
}
int main()
{
    cin >> n >> m;
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    ll si, sj;
    cin >> si >> sj;
    memset(vis, false, sizeof(vis));
    memset(dis, -1, sizeof(dis));
    bfs(si, sj);
    cout << dis[2][3];
    return 0;
}