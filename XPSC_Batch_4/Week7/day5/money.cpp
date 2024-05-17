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
        while(y--)
        {
            if(x<1000)
            {
                x+=1000;
            }
            else
            {
                x*=2;
            }
        }
        cout<<x<<endl;
    }
    return 0;
}