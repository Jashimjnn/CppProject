#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
const ll MX = 200005;
vector<pair<ll, ll>> v1[MX];
ll dis[MX];
bool vis[MX];
class cmp
{
public:
    bool operator()(pair<ll, ll> a, pair<ll, ll> b)
    {
        return a.second > b.second;
    }
};

void dijkstra(ll src, ll n)
{
    priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, cmp> pq;
    pq.push({src, 0});
    dis[src] = 0;

    while (!pq.empty())
    {
        pair<ll, ll> pr = pq.top();
        pq.pop();
        ll node = pr.first;
        ll cost = pr.second;

        for (pair<ll, ll> child : v1[node])
        {
            ll childNode = child.first;
            ll childCost = child.second;
            if (cost + childCost < dis[childNode])
            {
                dis[childNode] = cost + childCost;
                pq.push({childNode, dis[childNode]});
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> v(n + 1);

        for (ll i = 1; i <= n; i++)
        {
            cin >> v[i];
        }

        for (ll i = 1; i <= n; ++i)
        {
            v1[i].clear();
            dis[i] = LLONG_MAX;
        }
        memset(vis,false,sizeof(vis));
        for (ll i = 1; i <= n; i++)
        {
            for (ll j = i + 1; j <= n; j++)
            {
                ll x = (ll)(j - i) * max(v[i], v[j]);
                v1[i].push_back({j, x});
                v1[j].push_back({i, x});
            }
        }
        dijkstra(1, n);
        cout << dis[n] << endl;
    }

    return 0;
}
