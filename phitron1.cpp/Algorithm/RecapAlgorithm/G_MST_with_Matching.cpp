#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;

int parent[N];
int group_size[N];

void dsu_initialize(int n)
{
    for (int i = 0; i < n; i++)
    {
        parent[i] = -1;
        group_size[i] = 1;
    }
}

int dsu_find(int node)
{
    if (parent[node] == -1)
        return node;
    int leader = dsu_find(parent[node]);
    parent[node] = leader;
    return leader;
}

void dsu_union_by_size(int node1, int node2)
{
    int leaderA = dsu_find(node1);
    int leaderB = dsu_find(node2);
    if (group_size[leaderA] > group_size[leaderB])
    {
        parent[leaderB] = leaderA;
        group_size[leaderA] += group_size[leaderB];
    }
    else
    {
        parent[leaderA] = leaderB;
        group_size[leaderB] += group_size[leaderA];
    }
}

class Edge
{
public:
    int u, v, w;
    bool inSpanningTree;

    Edge(int u, int v, int w)
    {
        this->u = u;
        this->v = v;
        this->w = w;
        inSpanningTree = false;
    }
};

bool cmp(Edge a, Edge b)
{
    return a.w < b.w;
}

int main()
{
    int n, c;
    cin >> n >> c;
    dsu_initialize(n);
    vector<Edge> edgeList;
    while (n--)
    {
        for (int i = 0; i < n; i++)
        {
            int w;
            cin >> w;
            if (i > n)
                continue;
            if (w > 0)
                edgeList.push_back(Edge(n, i, w));
        }
    }
    sort(edgeList.begin(), edgeList.end(), cmp);
    int totalCost = 0;
    int maxMatching = 0;

    for (Edge ed : edgeList)
    {
        int leaderU = dsu_find(ed.u);
        int leaderV = dsu_find(ed.v);
        if (leaderU == leaderV)
            continue; 
        else
        {
            dsu_union_by_size(ed.u, ed.v);
            ed.inSpanningTree = true;
            totalCost += ed.w;
            maxMatching = max(maxMatching, 1);
        }
    }

    for (int i = 0; i < edgeList.size(); i++)
    {
        if (edgeList[i].inSpanningTree)
        {
            int u = edgeList[i].u;
            int v = edgeList[i].v;
            int matchingEdges = 0;
            for (int j = 0; j < edgeList.size(); j++)
            {
                if (i != j && edgeList[j].inSpanningTree && (edgeList[j].u == u || edgeList[j].u == v || edgeList[j].v == u || edgeList[j].v == v))
                {
                    matchingEdges++;
                }
            }
            maxMatching = max(maxMatching, matchingEdges);
        }
    }

    cout << (totalCost + maxMatching * c) << endl;
    return 0;
}
