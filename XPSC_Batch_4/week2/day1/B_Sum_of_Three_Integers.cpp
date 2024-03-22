#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    ll k,s;
    cin>>k>>s;
    ll cnt=0;
    for(ll i=0;i<=k;i++)
    {
        for(ll j=0;j<=k;j++)
        {
            ll va = s-i-j;
            if(va>=0 && va<=k)
            {
                cnt++;
            }
        }
    }
    cout<<cnt<<endl;
    return 0;
}