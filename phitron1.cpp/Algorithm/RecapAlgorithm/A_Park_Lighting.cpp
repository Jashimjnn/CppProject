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
        ll n,m;
        cin>>n>>m;
        ll x = n*m;
        if(x%2==0)
        {
            cout<<x/2<<endl;
        }
        else
        {
            cout<<(x/2)+1<<endl;
        }
    }
    return 0;
}