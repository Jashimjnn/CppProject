#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const int MAX_N = 1e5 + 5;

int parent[MAX_N];
int group_size[MAX_N];

void dsu_initialize(int n)
{
    for (int i = 1; i <= n; ++i)
    {
        parent[i] = i;
        group_size[i] = 1;
    }
}

int dsu_find(int node)
{
    if (parent[node] == node)
        return node;
    return parent[node] = dsu_find(parent[node]);
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

int main()
{
    int n, m;
    cin >> n >> m;

    dsu_initialize(n);

    vector<pair<int, int>> roads(m);

    vector<int> components;
    int largest_component = 1;

    for (int i = 0; i < m; ++i)
    {
        int a, b;
        cin >> a >> b;

        int parent_a = dsu_find(a);
        int parent_b = dsu_find(b);

        if (parent_a != parent_b)
        {
            dsu_union_by_size(a, b);
            largest_component = max(group_size[parent_a], group_size[parent_b]);
            components.push_back(n - i - 1);
        }
        else
        {
            components.push_back(n-i);
        }
    }

    for (int component : components)
    {
        cout << component << " " << largest_component << endl;
    }

    return 0;
}
