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
        vector<ll> v={0,1,2,1,2,1,1,2,2,2,1,2,2,2,3};
        if(n==5 || n==8)
        {
            cout<<3<<endl;
        }
        else
        {
            cout<<n/15+v[n%15]<<endl;
        }
    }
    return 0;
}