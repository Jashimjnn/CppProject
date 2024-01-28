#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
vector<pair<int, int>> v[100];
int dis[100];
void dijkstra(int src)
{
    queue<pair<int, int>> q;
    q.push({src, 0});
    dis[src] = 0;
    while (!q.empty())
    {
        pair<int, int> pr = q.front();
        q.pop();
        int nd = pr.first;
        int cst = pr.second;
        for (pair<int, int> child : v[nd])
        {
            int childnd = child.first;
            int childcst = child.second;
            if (cst + childcst < dis[childnd])
            {
                dis[childnd] = cst + childcst;
                q.push({childnd, dis[childnd]});
            }
        }
    }
}
int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        v[a].push_back({b, c});
        v[b].push_back({a, c});
    }
     //memset(dis,INT_MAX,sizeof(dis));
    for (int i = 0; i < n; i++)
    {
        dis[i] = INT_MAX;
    }
    dijkstra(0);
    for (int i = 0; i < n; i++)
    {
        cout << i << "->" << dis[i] << endl;
    }

    //Time complexity .. (v*e);
    return 0;
}