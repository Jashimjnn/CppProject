#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
class myStack
{
    public:
    list<ll>l;
    void push(ll val)
    {
        l.push_back(val);
    }
    void pop()
    {
        l.pop_back();
    }
    ll top()
    {
        return l.back();
    }
    ll size()
    {
        return l.size();
    }
    bool empty()
    {
        if(l.size()==0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
int main()
{
    myStack st;
    ll n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        st.push(x);
    }
    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
    return 0;
}