#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
class myStack
{
    public:
    vector<ll>v;
    void push(ll val)
    {
        v.push_back(val);
    }
    void pop()
    {
        v.pop_back();
    }
    ll top()
    {
        return v.back();
    }
    ll size()
    {
        return v.size();
    }
    bool empty()
    {
        if(v.size()==0)
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