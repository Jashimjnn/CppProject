#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    ll n,m;
    cin>>n>>m;
    vector<ll>v(n);
    multiset<ll>st;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        st.insert(v[i]);
    }
    while(m--)
    {
        ll x;
        cin>>x;
        auto it = st.upper_bound(x);
        if(it==st.begin())
        {
            cout<<-1<<endl;
        }
        else
        {
            --it;
            cout<<*it<<endl;
            st.erase(it);
        }
    }
    return 0;
}