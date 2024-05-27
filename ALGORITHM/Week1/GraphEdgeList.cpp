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
    vector<pair<ll,ll>>v;
    while(e--)
    {
        ll a,b;
        cin>>a>>b;
        v.push_back({a,b});
    }
    for(auto x:v)
    {
        cout<<x.first<<" "<<x.second<<endl;;
    }
    return 0;
}