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
        if((v.size()-st.size())%2==0)
        {
            cout<<st.size()<<endl;
        }
        else
        {
            cout<<st.size()-1<<endl;
        }
    }
    return 0;
}