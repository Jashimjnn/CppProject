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
        unordered_map<ll,ll>mp;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            mp[v[i]]++;
        }
        ll j=0;
        set<ll>st,st1;
        while(mp[j]>=2)
        {
            st.insert(j);
            st1.insert(j);
            j++;
        }
        if(mp[j]>0)
        {
            cout<<-1<<endl;
        }
        else
        {
            ll x=0;
            for(int i=0;i<n;i++)
            {
                if(st.find(v[i])!=st.end())
                {
                    st.erase(v[i]);
                }
                if(st.size()==0)
                {
                    x = i+1;
                    break;
                }
            }
            for(int i=x;i<n;i++)
            {
                if(st1.find(v[i])!=st1.end())
                {
                    st1.erase(v[i]);
                }
            }
            if(st1.size()==0)
            {
                cout<<2<<endl;
                cout<<1<<" "<<x<<endl;
                cout<<x+1<<" "<<n<<endl;
            }
            else
            {
                cout<<-1<<endl;
            }
        }
    }
    return 0;
}