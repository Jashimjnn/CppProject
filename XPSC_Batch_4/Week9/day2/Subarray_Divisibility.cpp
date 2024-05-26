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
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    map<ll, ll> mp;
    mp[0] = 1;
    ll sum = 0;
    ll cnt = 0;

    for (int i = 0; i < n; i++)
    {
        sum += v[i];
        ll x = sum % n;

        if (x < 0)
        {
            x += n;
        }
        if (mp.find(x) != mp.end())
        {
            cnt += mp[x];
        }
        mp[x]++;
    }
    cout << cnt << endl;
    return 0;
}
