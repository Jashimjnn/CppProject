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
        ll n,k;
        cin>>n>>k;
        vector<ll>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        ll g = v[0];
        for(int i=1;i<n;i++)
        {
            g = __gcd(g,v[i]);
        }
        ll flag = 0;
        ll cnt=0;
        for(int i=0;i<n;i++)
        {
            flag = __gcd(flag,v[i]);
            if(flag==g)
            {
                cnt++;
                flag = 0;
                if(cnt==k)
                {
                    break;
                }
            }
        }
        if(cnt==k)
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