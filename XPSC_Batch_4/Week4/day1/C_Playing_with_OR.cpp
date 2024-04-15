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
        ll flag = 0;
        for(int i=0;i<k;i++)
        {
            if(v[i]%2!=0)
            {
                flag++;
            }
        }
        ll cnt=0;
        if(flag>0)
        {
            cnt++;
        }
        for(int i=k;i<n;i++)
        {
            if(v[i-k]%2!=0)
            {
                flag--;
            }
            if(v[i]%2!=0)
            {
                flag++;
            }
            if(flag>0)
            {
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}