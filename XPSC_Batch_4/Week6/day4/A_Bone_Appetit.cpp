#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    ll n,m;
    cin>>n>>m;
    ll x,y;
    cin>>x>>y;
    ll ans = n*x+y*m;
    cout<<ans<<endl;
    return 0;
}