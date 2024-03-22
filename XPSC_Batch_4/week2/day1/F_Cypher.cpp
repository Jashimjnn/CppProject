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
        vector<ll>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        for(int i=0;i<n;i++)
        {
            ll x;
            cin>>x;
            string str;
            cin>>str;
            for(auto ch:str)
            {
                if(ch=='D')
                {
                    v[i]++;
                    if(v[i]==10)
                    {
                        v[i]=0;
                    }
                }
                else
                {
                    v[i]--;
                    if(v[i]==-1)
                    {
                        v[i]=9;
                    }
                }
            }
        }
        for(auto va:v)
        {
            cout<<va<<" ";
        }
        cout<<endl;
    }
    return 0;
}