#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
vector<pair<int, int>> v[100];
int dis[100];
class cmp
{
public:
    bool operator()(pair<int, int> a, pair<int, int> b)
    {
        return a.second < b.second;
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
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        v[a].push_back({b, c});
        v[b].push_back({a, c});
    }
    // memset(dis,INT_MAX,sizeof(dis));
    for (int i = 0; i < n; i++)
    {
        dis[i] = INT_MAX;
    }
    int src;
    cin>>src;
    dijkstra(src);
    vector<int>v1;
    //v1[0]=src;
    for (int i = 0; i < n; i++)
    {
        //cout << i << "->" << dis[i] << endl;
        v1.push_back(dis[i]);
    }
    //v1.push_back(src);
    for(auto x:v1)
    {
        cout<<x<<" ";
    }
    cout<<endl;

    // Time complexity .. O((v+e)logv)=O(elogv);
    return 0;
}