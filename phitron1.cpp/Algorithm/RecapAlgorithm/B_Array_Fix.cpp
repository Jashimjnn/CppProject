#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
bool Jashim()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    if (is_sorted(v.begin(), v.end()))
    {
        return true;
    }
    vector<ll> v1;
    for (ll i = 0; i < v.size(); i++)
    {
        if (v[i] >= 10)
        {
            vector<ll> v2;
            ll flag = v[i];
            ll ans = flag % 10;
            flag /= 10;
            v1.push_back(flag);
            v1.push_back(ans);
            for (ll j = 0; j < v1.size(); j++)
            {
                v2.push_back(v1[j]);
            }

            for (ll j = i + 1; j < v.size(); j++)
            {
                v2.push_back(v[j]);
            }
            if (is_sorted(v2.begin(), v2.end()))
            {
                return true;
            }
        }
        else
        {
            v1.push_back(v[i]);
        }
    }
    return false;
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        bool flag = Jashim();
        if(flag)
        {
            Y;
        }
        else
        {
            N;
        }
    }
    return 0;
}