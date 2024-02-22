#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
const int N = 100005;
vector<pair<ll, ll>> v[N];
ll dis[N];
void dijkstra(ll src)
{
    queue<pair<ll, ll>> q;
    q.push({src, 0});
    dis[src] = 0;
    while (!q.empty())
    {
        pair<ll, ll> parent = q.front();
        q.pop();
        ll node = parent.first;
        ll cost = parent.second;
        for (pair<ll, ll> child : v[node])
        {
            ll childNode = child.first;
            ll childCost = child.second;
            if (cost + childCost < dis[childNode])
            {
                dis[childNode] = cost + childCost;
                q.push({childNode, dis[childNode]});
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
    cin>>q;
    dijkstra(src);
    while(q--)
    {
        ll d,cst;
        cin>>d>>cst;
        ll x = dis[d];
        if(x<=cst)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}