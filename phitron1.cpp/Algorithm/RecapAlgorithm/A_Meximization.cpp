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
        set<ll>st;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            st.insert(v[i]);
        }
        sort(v.begin(),v.end());
        vector<ll>v1;
        for(int i=0;i<n-1;i++)
        {
            if(v[i]==v[i+1])
            {
                v1.push_back(v[i]);
            }
        }
        for(auto x : st)
        {
            cout<<x<<" ";
        }
        for(auto x:v1)
        {
            cout<<x<<" ";
        }
        cout<<endl;
    }
    return 0;
}