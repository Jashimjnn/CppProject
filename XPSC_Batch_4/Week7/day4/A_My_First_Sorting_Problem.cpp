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
        ll x,y;
        cin>>x>>y;
        if(x<y)
        {
            cout<<x<<" "<<y<<endl;
        }
        else
        {
            cout<<y<<" "<<x<<endl;
        }
    }
    return 0;
}