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
        }
        bool flag = false;
        for(int i=n-1;i>=0;i--)
        {
            if(st.count(v[i]))
            {
                cout<<i+1<<endl;
                flag = true;
                break;
            }
            else
            {
                st.insert(v[i]);
            }
        }
        if(!flag)
        {
            cout<<0<<endl;
        }
    }
    return 0;
}