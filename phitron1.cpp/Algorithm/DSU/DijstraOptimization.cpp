#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
const int X = 1e5+5;
vector<pair<int,int>>v[X];
int dis[X];
class cmp
{
  public:
    bool operator()(pair<int,int>a,pair<int,int>b)
    {
        return a.second<b.second;
    }
};
void dijstra(int src)
{
    priority_queue<pair<int,int>,vector<pair<int,int>>,cmp>pq;
    pq.push({src,0});
    dis[src]=0;
    while(!pq.empty())
    {
        pair<int,int> fr = pq.top();
        pq.pop();
        int node = fr.first;
        int cst = fr.second;
        for(pair<int,int>child : v[node])
        {
            int childnd = child.first;
            int childcst = child.second;
            if(cst+childcst<dis[childnd])
            {
                dis[childnd]=cst+childcst;
                pq.push({childnd,dis[childnd]});
            }
        }
    }
}
int main()
{
    int n,e;
    cin>>n>>e;
    while(e--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        v[a].push_back({b,c});
        v[b].push_back({a,c});
    }
    for(int i=0;i<n;i++)
    {
        dis[i]=INT_MAX;
    }
    dijstra(0);
    for(int i=0;i<n;i++)
    {
        cout<<i<<" "<<dis[i]<<endl;
    }
    return 0;
}