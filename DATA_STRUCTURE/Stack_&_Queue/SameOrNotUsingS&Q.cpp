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
    ll m;
    cin>>m;
    queue<ll>q;
    while(m--)
    {
        ll x;
        cin>>x;
        q.push(x);
    }
    if(n!=m)
    {
        N;
        return 0;
    }
    bool flag = true;
    while(!st.empty())
    {
        ll x = st.top();
        st.pop();
        ll y = q.front();
        q.pop();
        if(x!=y)
        {
            flag = false;
            break;
        }
    }
    if(flag==true)
    {
        Y;
    }
    else
    {
        N;
    }
    return 0;
}