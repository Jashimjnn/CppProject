// #include <bits/stdc++.h>
// using namespace std;
// const int X = 1e6 + 5;
// vector<int> mat[X];
// bool visited[X];
// int parent[X];
// int edge=0;
// void bfs(int src)
// {
//     queue<int> q;
//     q.push(src);
//     visited[src] = true;
//     while (!q.empty())
//     {
//         int par = q.front();
//         q.pop();
//         for (auto child : mat[par])
//         {
//             if (visited[child] == true && parent[par] != child)
//             {
//                 edge++;
//             }
//             if (visited[child] == false)
//             {
//                 visited[child] = true;
//                 parent[child] = par;
//                 q.push(child);
//             }
//         }
//     }
// }
// int main()
// {
//     int n, e;
//     cin >> n >> e;
//     while (e--)
//     {
//         int a, b;
//         cin >> a >> b;
//         mat[a].push_back(b);
//         mat[b].push_back(a);
//     }
//     memset(visited, false, sizeof(visited));
//     memset(parent, -1, sizeof(parent));
//     for (int i = 1; i <= n; i++)
//     {
//         if (!visited[i])
//         {
//             bfs(i);
//         }
//     }
//     cout<<edge/2<<endl;
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
const int X = 1e6 + 5;
vector<int> mat[X];
bool visited[X];
int parent[X];
int edge = 0;

void dfs(int src, int n)
{
    visited[src] = true;
    
    for (auto child : mat[src])
    {
        if (!visited[child])
        {
            parent[child] = src;
            dfs(child, src);
        }
        else if (parent[src] != child)
        {
            edge++;
        }
    }
}

int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        mat[a].push_back(b);
        mat[b].push_back(a);
    }
    memset(visited, false, sizeof(visited));
    memset(parent, -1, sizeof(parent));
    for (int i = 1; i <= n; i++)
    {
        if (!visited[i])
        {
            dfs(i, -1);
        }
    }
    cout << edge / 2 << endl;
    return 0;
}
