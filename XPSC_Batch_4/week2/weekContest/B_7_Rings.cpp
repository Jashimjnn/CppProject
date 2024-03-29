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
        ll n,x;
        cin>>n>>x;
        ll ans = n*x;
        vector<ll>v;
        while(ans!=0)
        {
            ll tmp = ans%10;
            v.push_back(tmp);
            ans/=10;
        }
        if(v.back()!=0 && v.size()==5)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}