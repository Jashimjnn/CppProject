#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    ll k,n,w;
    cin>>k>>n>>w;
    ll ans=0;
    for(int i=1;i<=w;i++)
    {
        ans+=(i*k);
    }
    if(ans<=n)
    {
        cout<<0<<endl;
    }
    else
    {
        cout<<(ans-n)<<endl;
    }
    return 0;
}