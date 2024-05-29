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
        ll m;
        cin>>m;
        vector<ll>v(m);
        for(int i=0;i<m;i++)
        {
            cin>>v[i];
        }
        vector<ll>v1;
        if(m==1)
        {
            cout<<1<<endl;
            cout<<v[0]<<endl;
            continue;
        }
        if(is_sorted(v.begin(),v.end()))
        {
            cout<<v.size()<<endl;
            for(int i=0;i<m;i++)
            {
                cout<<v[i]<<" ";
            }
            cout<<endl;
            continue;
        }
        v1.push_back(v[0]);
        for(int i=1;i<m;i++)
        {
            if(v[i]<v[i-1])
            {
              v1.push_back(v[i]);
              v1.push_back(v[i]);
            }
            else
            {
                v1.push_back(v[i]);
            }
        }
        cout<<v1.size()<<endl;
        for(auto x:v1)
        {
            cout<<x<<" ";
        }
        cout<<endl;
    }
    return 0;
}