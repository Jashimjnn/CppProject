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
        ll a,b,c,x,y;
        cin>>a>>b>>c>>x>>y;
        ll mx1 = 0;
        ll mx2 = 0;
        ll p = max(mx1,x-a);
        ll q = max(mx2,y-b);
        if(p+q<=c)
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