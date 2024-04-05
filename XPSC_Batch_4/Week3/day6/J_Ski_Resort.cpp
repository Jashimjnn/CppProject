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
        ll n,k,q;
        cin>>n>>k>>q;
        vector<ll>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        ll cnt=0;
        ll cnt1=0;
        for(int i=0;i<n;i++)
        {
            if(v[i]<=q)
            {
                cnt++;
            }
            else
            {
                if(cnt>=k)
                {
                    cnt1+=((cnt-k+1)*(cnt-k+2)/2);
                }
                cnt=0;
            }
        }
        if(cnt>=k)
        {
            cnt1+=((cnt-k+1)*(cnt-k+2)/2);
        }

        cout<<cnt1<<endl;
    }
    return 0;
}