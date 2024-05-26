#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    ll n;
    cin>>n;
    vector<ll>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    ll idx=0;
    ll cnt=0;
    set<ll>st;
    for(int i=0;i<n;i++)
    {
        while(st.count(v[i]))
        {
            st.erase(v[idx]);
            idx++;
        }
        st.insert(v[i]);
        cnt = max(cnt,(ll)st.size());
    }
    cout<<cnt<<endl;
    return 0;
}