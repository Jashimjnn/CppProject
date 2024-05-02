#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
bool fun(ll n,ll x,ll y,ll mid)
{
    if(mid<min(x,y))
    {
        return false;
    }
    mid-=min(x,y);
    return ((mid/x)+(mid/y)+1)>=n;
}
int main()
{
    ll n,x,y;
    cin>>n>>x>>y;
    ll left=0,right=n*min(x,y);
    while((left+1)<right)
    {
        ll mid = (right+left)/2;
        if(fun(n,x,y,mid))
        {
            right = mid;
        }
        else
        {
            left = mid;
        }
    }
    cout<<right<<endl;
    return 0;
}