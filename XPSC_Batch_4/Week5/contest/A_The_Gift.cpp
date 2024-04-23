#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    ll x,n,m;
    cin>>x>>n>>m;
    ll ans = x+m;
    if(ans>=n)
    {
        Y;
    }
    else
    {
        N;
    }
    return 0;
}