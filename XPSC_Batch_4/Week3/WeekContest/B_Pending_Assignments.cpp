#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll x,y,z;
        cin>>x>>y>>z;
        ll ans = z*24*60;
        if(x*y<=ans)
        {
            Y;
        }
        else
        {
            N;
        }
    }
    return 0;
}