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
        ll n;
        cin>>n;
        ll  ar[n];
        for(ll i=1;i<=n;i++)
        {
            cin>>ar[i];
        }
        bool flag=false;
       
        if(ar[1]!=1)
        {
            N;
        }
        else
        {
            Y;
        }
    }
    return 0;
}