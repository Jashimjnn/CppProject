#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
class Edge
{
public:
    int u, v, c;
    Edge(int u, int v, int c)
    {
        this->u = u;
        this->v = v;
        this->c = c;
    }
};

const int X = 1e5 + 5;
int dis[X];

int main()
{
    int n, e;
    cin >> n >> e;
    vector<Edge> EdgeList;
    
    while (e--)
    {
        int u, v, c;
        cin >> u >> v >> c;
        EdgeList.push_back(Edge(u, v, c));
    }

    for (int i = 1; i <= n; i++)
    {
        dis[i] = 30000;
    }
    dis[1] = 0;

    for (int i = 1; i <= n-1 ; i++)
    {
        //bool relaxed = false;
        for (Edge ed : EdgeList)
        {
            int u, v, c;
            u = ed.u;
            v = ed.v;
            c = ed.c;
            if (dis[u] < 30000 && dis[u] + c < dis[v])
            {
                dis[v] = dis[u] + c;
                //relaxed = true;
            }
        }
        //if (!relaxed)
        //{
           // break;
       // }
    }

    for (int i = 1; i <= n; i++)
    {
        if (dis[i] == 30000)
        {
            cout << "30000 ";
        }
        else
        {
            cout << dis[i] << " ";
        }
    }
    cout << endl;

    return 0;
}
