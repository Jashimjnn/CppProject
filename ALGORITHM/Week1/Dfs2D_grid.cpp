#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
char mat[20][20];
vector<pair<ll,ll>>d = {{0,1},{0,-1},{1,0},{-1,0}};
bool vis[20][20];
ll n,m;
bool valid(ll x,ll y)
{
    if(x<0 || x>=n || y<0 || y>=m)
    {
        return false;
    }
    return true;
}
void dfs(ll si,ll sj)
{
    cout<<si<<" "<<sj;
    vis[si][sj] = true;
    for(int i=0;i<4;i++)
    {
        ll ci = si+d[i].first;
        ll cj = sj+d[i].second;
        if(valid(ci,cj)==true && vis[ci][cj]==false)
        {
            dfs(ci,cj);
        }
    }
}
int main()
{
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>mat[i][j];
        }
    }
    memset(vis,false,sizeof(vis));
    ll si,sj;
    cin>>si>>sj;
    dfs(si,sj);
    return 0;
}