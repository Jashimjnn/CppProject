#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
class myStack
{
public:
    vector<ll> v;
    void push(ll n)
    {
        v.push_back(n);
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
        if (v.size() == 0)
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
    cin >> n;
    while (n--)
    {
        ll x;
        cin >> x;
        st.push(x);
    }
    cout << st.size() << endl;
    while (!st.empty())
    {
        ll x = st.top();
        st.pop();
        cout << x << " ";
    }
    cout << endl;
    return 0;
}