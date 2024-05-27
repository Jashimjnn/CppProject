#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    ll n,e;
    cin>>n>>e;
    vector<ll>v[n];
    while(e--)
    {
        ll a,b;
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    for(int i=0;i<v[3].size();i++)
    {
        cout<<v[3][i]<<" ";
    }
    cout<<endl;
    return 0;
}