#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    ll n;
    cin>>n;
    vector<ll>v;
    for(int i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        v.push_back(x);
    }
    ll m;
    cin>>m;
    vector<ll>v2;
    for(int i=0;i<m;i++)
    {
        ll x;
        cin>>x;
        v2.push_back(x);
    }
    ll y;
    cin>>y;
    v.insert(v.begin()+y,v2.begin(),v2.end());
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
}