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
    queue<ll>q;
    while(n--)
    {
        ll x;
        cin>>x;
        q.push(x);
    }
    queue<ll>q1;
    while(!q.empty())
    {
        ll x = q.front();
        q.pop();
        q1.push(x);
    }
    stack<ll>st;
    while(!q1.empty())
    {
        ll x = q1.front();
        q1.pop();
        st.push(x);
    }
    while(!st.empty())
    {
        ll x = st.top();
        st.pop();
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}