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
        list<ll>l;
        for(int i=0;i<n;i++)
        {
            ll x;
            cin>>x;
            l.push_back(x);
        }
        l.sort();
        l.unique();
        for(auto x:l)
        {
            cout<<x<<" ";
        }
        cout<<endl;
    }
    return 0;
}