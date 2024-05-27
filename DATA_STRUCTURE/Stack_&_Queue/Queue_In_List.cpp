#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
class myQueue
{
public:
    list<ll> lst;
    void push(ll n)
    {
        lst.push_back(n);
    }
    void pop()
    {
        lst.pop_front();
    }
    ll front()
    {
        return lst.front();
    }
    ll size()
    {
        lst.size();
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
    myQueue q;
    ll n;
    cin>>n;
    while(n--)
    {
        ll x;
        cin>>x;
        q.push(x);
    }
    cout<<q.size()<<endl;
    while(!q.empty())
    {
        ll x = q.front();
        q.pop();
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}