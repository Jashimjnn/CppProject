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
        string str;
        cin >> str;
        vector<ll> v;
        ll cnt = 1;
        for (int i = 1; i < n; ++i)
        {
            if (str[i] == str[i - 1])
            {
                cnt++;
            }
            else
            {
                v.push_back(cnt);
                cnt = 1;
            }
        }
        v.push_back(cnt);
        ll mx = LLONG_MIN;
        for (int i = 0; i < v.size(); i++)
        {
            mx = max(mx, v[i]);
        }
        cout << mx << " ";
        ll i = n;
        ll cnt1 = 1;
        vector<ll> v1;
        while (q--)
        {
            char ch;
            cin >> ch;
            str += ch;
            if (str[i] == str[i - 1])
            {
                v.back()++;
            }
            i++;
            ll mx1 = LLONG_MIN;
            for (int i = 0; i < v.size(); i++)
            {
                mx1 = max(mx1, v[i]);
            }
            cout << mx1 << " ";
        }
        cout << endl;
    }
    return 0;
}