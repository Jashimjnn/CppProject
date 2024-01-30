#include <iostream>
#include <vector>
#include <queue>
#include <climits>

using namespace std;

vector<pair<int, int>> v[100];
int dis[100];

class cmp
{
public:
    bool operator()(pair<int, int> a, pair<int, int> b)
    {
        return a.second > b.second;  // Compare based on distance in ascending order
    }
};

void dijkstra(int src)
{
    priority_queue<pair<int, int>, vector<pair<int, int>>, cmp> pq;
    pq.push({src, 0});
    dis[src] = 0;

    while (!pq.empty())
    {
        pair<int, int> pr = pq.top();
        pq.pop();
        int nd = pr.first;
        int cst = pr.second;

        for (pair<int, int> child : v[nd])
        {
            int childnd = child.first;
            int childcst = child.second;

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
    int n, s, f;
    cin >> n >> s >> f;

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         int weight;
    //         cin >> weight;
    //         if (weight != -1)
    //         {
    //             v[i].push_back({j, weight});
    //         }
    //     }
    //}
    while(n--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        v[a].push_back({b,c});
        //v[b].push_back({a,c});
    }

    for (int i = 0; i < n; i++)
    {
        dis[i] = INT_MAX;
    }

    dijkstra(s);

    vector<int>v1;
    for(int i=0;i<n;i++)
    {
        v1.push_back(dis[i]);
    }
    for(auto x:v1)
    {
        cout<<x<<" ";
    }
    if (dis[f] == INT_MAX)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << dis[f] << endl;  
    }

    return 0;
}
