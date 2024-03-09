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
        ll a,b,c;
        cin>>a>>b>>c;
        ll p = abs(a-b)*2;
        ll mx = max(a,max(b,c));
        if(mx>p)
        {
            cout<<-1<<endl;
        }
        else
        {
            if(c<=abs(a-b))
            {
                cout<<c+abs(a-b)<<endl;
            }
            else
            {
                cout<<c-abs(a-b)<<endl;
            }
        }
    }
    return 0;
}