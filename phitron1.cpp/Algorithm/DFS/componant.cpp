#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
const int X = 1e5 + 5;
vector<int> v[X];
bool vis[X];
void dfs(int src)
{
    cout << src << endl;
    vis[src] = true;
    for (int child : v[src])
    {
        if (vis[child] == false)
        {
            dfs(child);
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
        v[a].push_back(b);
        v[b].push_back(a);
    }
    memset(vis, false, sizeof(vis));
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        if(vis[i]==false)
        {
            dfs(i);
            cnt++;
        }
    }
    cout<<"componant->"<<cnt<<endl;
    return 0;
}