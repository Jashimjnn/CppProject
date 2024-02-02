#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
const ll X = 1e18;
vector<pair<ll, ll>> v[100005];
ll dis[100005];
void dijkstra(ll src)
{
    queue<pair<ll, ll>> q;
    q.push({src, 0});
    dis[src] = 0;
    while (!q.empty())
    {
        pair<ll, ll> pr = q.front();
        q.pop();
        ll nd = pr.first;
        ll cst = pr.second;
        for (pair<ll, ll> ch : v[nd])
        {
            ll chld_nd = ch.first;
            ll chld_cst = ch.second;
            if (cst + chld_cst < dis[chld_nd])
            {
                dis[chld_nd] = cst + chld_cst;
                q.push({chld_nd, dis[chld_nd]});
            }
        }
    }
}
int main()
{
    ll n, e;
    cin >> n >> e;
    while (e--)
    {
        ll a, b, c;
        cin >> a >> b >> c;
        v[a].push_back({b, c});
    }

    for (ll i = 1; i <= n; i++)
    {
        dis[i] = 1e18;
    }
    ll src;
    cin>>src;
    ll q;
    cin >> q;
    dijkstra(src);
    while (q--)
    {
        ll d, dw;
        cin >> d >> dw;
        if (dis[d] <= dw)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
