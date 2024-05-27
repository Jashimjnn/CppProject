#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
class myStack
{
    public:
    list<ll>lst;
    void push(ll n)
    {
        lst.push_back(n);
    }
    void pop()
    {
        lst.pop_back();
    }
    ll top()
    {
        return lst.back();
    }
    ll size()
    {
        return lst.size();
    }
    bool empty()
    {
        if(lst.size()==0)
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
    while(n--)
    {
        ll x;
        cin>>x;
        st.push(x);
    }
    cout<<st.size()<<endl;
    while(!st.empty())
    {
        ll x = st.top();
        st.pop();
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}