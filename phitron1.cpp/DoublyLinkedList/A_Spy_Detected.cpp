#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin>>n;
        vector<ll>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        ll cnt;
        for(int i=0;i<n-1;i++)
        {
          if(v[i]==v[i+1])
          {
            cnt=v[i];
            break;
          }
        }
        ll ans=0;
        for(int i=0;i<n-1;i++)
        {
            if(v[i]!=v[i+1] && v[i+1]!=v[i+2])
            {
                ans=i+1;
            }
            else if(v[i]!=v[i+1])
            {
                ans=i;
            }
        }
        cout<<ans+1<<endl;
    }
    return 0;
}