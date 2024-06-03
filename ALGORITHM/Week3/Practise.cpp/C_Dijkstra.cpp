#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll X = 1e5 + 5;
vector<pair<ll, ll>> v[X];
ll dis[X];
class cmp
{
public:
    bool operator()(pair<ll, ll> a, pair<ll, ll> b)
    {
        return a.second > b.second;
    }
};
void dijstra(ll src)
{
    priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, cmp> pq;
    pq.push({src, 0});
    dis[src] = 0;
    while (!pq.empty())
    {
        pair<ll, ll> fr = pq.top();
        pq.pop();
        ll node = fr.first;
        ll cst = fr.second;
        for (pair<ll, ll> child : v[node])
        {
            ll childnd = child.first;
            ll childcst = child.second;
            if (cst + childcst < dis[childnd])
            {
                dis[childnd] = cst + childcst;
                pq.push({childnd, dis[childnd]});
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
        v[b].push_back({a, c});
    }
    for (ll i = 1; i <= n; i++)
    {
        dis[i] = 1e18;
    }
    dijstra(1);
    if (dis[n] == 1e18)
    {
        cout << "-1" << endl;
    }
    else
    {
        vector<ll> path;
        ll current = n;
        while (current != 1)
        {
            path.push_back(current);
            for (pair<ll, ll> neighbor : v[current])
            {
                ll neighbor_node = neighbor.first;
                ll neighbor_dist = neighbor.second;
                if (dis[current] == dis[neighbor_node] + neighbor_dist)
                {
                    current = neighbor_node;
                    break;
                }
            }
        }
        path.push_back(1);
        reverse(path.begin(), path.end());
        for (ll node : path)
        {
            cout << node << " ";
        }
        cout << endl;
    }
    return 0;
}