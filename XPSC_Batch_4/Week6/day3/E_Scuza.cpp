#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, q;
        cin >> n >> q;
        vector<ll> v;
        vector<ll> pre;
        pre.push_back(0);
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            pre.push_back(pre.back() + x);
            if (i == 0)
            {
                v.push_back(x);
            }
            else
            {
                v.push_back(max(v.back(), x));
            }
        }
        vector<ll> v1;
        while (q--)
        {
            ll k;
            cin >> k;
            ll ind = upper_bound(v.begin(), v.end(), k) - v.begin();
            v1.push_back(pre[ind]);
        }
        for(auto va:v1)
        {
            cout<<va<<" ";
        }
        cout << endl;
    }
    return 0;
}
