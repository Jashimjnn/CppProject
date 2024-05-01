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
        map<ll,ll>mp;
        for(int i=1;i<=n;i++)
        {
            cin>>mp[i];
        }
        bool flag = false;
        for(auto [x,y]:mp)
        {
            if(mp[y]==x)
            {
                flag = true;
                break;
            }
        }
        if(flag==true)
        {
            cout<<2<<endl;
        }
        else
        {
            cout<<3<<endl;
        }
    }
    return 0;
}