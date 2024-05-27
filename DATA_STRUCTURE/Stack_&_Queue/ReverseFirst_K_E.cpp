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
        queue<ll>q;
        while(n--)
        {
            ll x;
            cin>>x;
            q.push(x);
        }
        stack<ll>st;
        while(k--)
        {
            ll x = q.front();
            q.pop();
            st.push(x);
        }
        while(!st.empty())
        {
            ll x = st.top();
            st.pop();
            cout<<x<<" ";
        }
        while(!q.empty())
        {
            ll x = q.front();
            q.pop();
            cout<<x<<" ";
        }
        cout<<endl;
    }
    return 0;
}