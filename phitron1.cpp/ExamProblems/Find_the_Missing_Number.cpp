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
        ll m,a,b,c;
        cin>>m>>a>>b>>c;
        ll x=a*b*c;
        if(m%x==0)
        {
            cout<<(m/x)<<endl;
        }
        else
        {
            cout<<"-1"<<endl;
        }
    }
    return 0;
}