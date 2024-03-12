#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b,c,d;
        cin>>a>>b>>c>>d;
        ll x = a*b;
        ll y = c*d;
        if(x==y)
        {
            cout<<"Equal\n";
        }
        else
        {
            cout<<"Not Equal\n";
        }
    }
    return 0;
}