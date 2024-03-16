#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    ll a,b,c;
    cin>>a>>b>>c;
    ll ans;
    for(int i=1;i<=20;i++)
    {
        ans = i*c;
        if(ans>=a && ans<=b)
        {
            break;
        }
    }
    if(ans>=a && ans<=b)
    {
        cout<<ans<<endl;
    }
    else
    {
        cout<<-1<<endl;
    }
    return 0;
}