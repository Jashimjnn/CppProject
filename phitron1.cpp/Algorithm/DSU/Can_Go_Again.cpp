#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
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
const ll N = 1e5 + 5;
ll dis[N];
int main()
{
    ll n, e;
    cin >> n >> e;
    vector<Edge> EdgeList;
    while (e--)
    {
        ll u, v, c;
        cin >> u >> v >> c;
        EdgeList.push_back(Edge(u, v, c));
    }
    for (ll i = 1; i <=n; i++)
    {
        dis[i] = 1e18;
    }
    ll src;
    cin >> src;
    dis[src] = 0;
    for (ll i = 1; i <= n - 1; i++)
    {
        for (Edge ed : EdgeList)
        {
            ll u, v, c;
            u = ed.u;
            v = ed.v;
            c = ed.c;
            if (dis[u] < 1e18 && dis[u] + c < dis[v])
            {
                dis[v] = dis[u] + c;
            }
        }
    }
    ll q;
    cin >> q;
    while (q--)
    {
        ll dst;
        cin >> dst;
        for (Edge ed : EdgeList)
        {
            ll a, b, w;
            a = ed.u;
            b = ed.v;
            w = ed.c;
            if (dis[a] < 1e18 && dis[a] + w < dis[b])
            {
                cout << "Negative Cycle Detected" << endl;
                return 0;
            }
        }
        if (dis[dst] == 1e18)
        {
            cout << "Not Possible" << endl;
        }
        else
        {
            cout << dis[dst] << endl;
        }
    }
    return 0;
}
