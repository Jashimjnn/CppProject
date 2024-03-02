#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    int n,e;
    cin>>n>>e;
    vector<int>adj[n];
    while(e--)
    {
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    for(int i=0;i<adj[3].size();i++)
    {
        cout<<adj[3][i]<<" ";
    }
    cout<<endl;
    return 0;
}