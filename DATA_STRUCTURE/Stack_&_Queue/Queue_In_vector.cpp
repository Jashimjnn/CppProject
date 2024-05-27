#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
class myQueue
{
public:
    vector<ll> v;
    void push(ll n)
    {
        v.push_back(n);
    }
    void pop()
    {
        v.erase(v.begin());
    }
    ll front()
    {
        return v.front();
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
    myQueue q;
    ll n;
    cin >> n;
    while (n--)
    {
        ll x;
        cin >> x;
        q.push(x);
    }
    cout << q.size() << endl;
    while (!q.empty())
    {
        ll x = q.front();
        q.pop();
        cout << x << " ";
    }
    cout << endl;
    return 0;
}