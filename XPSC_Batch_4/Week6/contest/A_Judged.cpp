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
        ll cnt=0;
        for(int i=1;i<=5;i++)
        {
            ll x;
            cin>>x;
            if(x==1)
            {
                cnt++;
            }
        }
        if(cnt>=4)
        {
            Y;
        }
        else
        {
            N;
        }
    }
    return 0;
}