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
    stack<ll>st;
    while(n--)
    {
        ll x;
        cin>>x;
        st.push(x);
    }
    stack<ll>st1;
    while(!st.empty())
    {
        ll x = st.top();
        st.pop();
        st1.push(x);
    }
    while(!st1.empty())
    {
        ll x = st1.top();
        st1.pop();
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}