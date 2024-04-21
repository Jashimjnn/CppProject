#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    ll n;
    cin >> n;
    priority_queue<ll, vector<ll>, greater<ll>> pq;
    for (ll i = 0; i < n; i++)
    {
        ll v;
        cin >> v;
        pq.push(v);
    }
    ll q;
    cin >> q;
    while (q--)
    {
        ll x;
        cin >> x;
        if (x == 0)
        {
            ll y;
            cin >> y;
            pq.push(y);
            cout << pq.top() << endl;
        }
        else if (x == 1)
        {
            if (!pq.empty())
            {
                cout << pq.top() << endl;
            }
            else
            {
                cout << "Empty" << endl;
            }
        }
        else if (x == 2)
        {
            if (!pq.empty())
            {
                pq.pop();
            }
            if (!pq.empty())
            {
                cout << pq.top() << endl;
            }
            else
            {
                cout << "Empty" << endl;
            }
        }
    }

    return 0;
}
