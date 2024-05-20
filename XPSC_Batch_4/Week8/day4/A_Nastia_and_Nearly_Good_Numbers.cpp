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
        ll a,b;
        cin>>a>>b;
        if(b==1)
        {
            N;
        }
        else if(b==2)
        {
            Y;
            if(a==1)
            {
                cout<<3<<" "<<1<<" "<<4<<endl;
            }
            else
            {
                b*=a;
                ll z = a*b;
                b--;
                ll x = a*b;
                ll y = a;
                cout<<x<<" "<<y<<" "<<z<<endl;
            }
        }
        else
        {
            Y;
            ll z=a*b;
            b--;
            ll x=a*b;
            ll y=a;
            cout<<x<<" "<<y<<" "<<z<<endl;
        }
    }
    return 0;
}