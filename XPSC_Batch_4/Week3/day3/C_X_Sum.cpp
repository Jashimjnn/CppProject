#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
ll mat[201][201];
ll fun(ll x,ll y,ll n,ll m)
{
    ll ans =0;
    ll idx=0;
    while(x-idx>-1 && y-idx>-1)
    {
        ans+=mat[x-idx][y-idx];
        idx++;
    }
    idx=0;
    while(x-idx>-1 && y+idx<m)
    {
        ans+=mat[x-idx][y+idx];
        idx++;
    }
    idx=0;
    while(x+idx<n && y+idx<m)
    {
        ans+=mat[x+idx][y+idx];
        idx++;
    }
    idx=0;
    while(x+idx<n && y-idx>-1)
    {
        ans+=mat[x+idx][y-idx];
        idx++;
    }
    return ans-3*mat[x][y];
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>mat[i][j];
            }
        }
        ll sum=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                sum=max(sum,fun(i,j,n,m));
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}