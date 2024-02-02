#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
class Edge
{
public:
    ll u, v, c;
    Edge(ll u, ll v, ll c)
    {
        this->u = u;
        this->v = v;
        this->c = c;
    }
};
const ll X = 1e18;
ll dis[1005];
int main()
{
    ll n, e;
    cin >> n >> e;
    vector<Edge> E_List;
    while (e--)
    {
        ll a, b, w;
        cin >> a >> b >> w;
        E_List.push_back(Edge(a, b, w));
    }
    for (ll i = 1; i <= n; i++)
    {
        dis[i] = X;
    }
    ll src;
    cin >> src;
    dis[src] = 0;
    for (ll i = 1; i <= n - 1; i++)
    {
        for (Edge ed : E_List)
        {
            ll a, b, w;
            a = ed.u;
            b = ed.v;
            w = ed.c;
            if (dis[a] < X && dis[a] + w < dis[b])
            {
                dis[b] = dis[a] + w;
            }
        }
    }
    ll q;
    cin >> q;
    while (q--)
    {
        ll x;
        cin >> x;
        for (Edge ed : E_List)
        {
            ll a, b, w;
            a = ed.u;
            b = ed.v;
            w = ed.c;
            if (dis[a] < X && dis[a] + w < dis[b])
            {
                cout << "Negative Cycle Detected" << endl;
                return 0;
            }
        }
        if (dis[x] == X)
        {
            cout << "Not Possible" << endl;
        }
        else
        {
            cout << dis[x] << endl;
        }
    }
    return 0;
}
