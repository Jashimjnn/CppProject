#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
const int X=1e5+5;
int par[X];
void dsu(int n)
{
    for(int i=0;i<n;i++)
    {
        par[i]=-1;
    }
    par[1]=3;
    par[2]=1;
}
int find(int nd)
{
  if(par[nd]==-1)
  {
    return nd;
  }
  int leader = find(par[nd]);
  par[nd] = leader;
  return leader;
}
int main()
{
    dsu(4);
    cout<<find(0)<<endl;
    cout<<find(1)<<endl;
    cout<<find(2)<<endl;
    cout<<find(3)<<endl;
    return 0;
}