#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    ll n, x;
    cin >> n >> x;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    map<ll, ll> mp;
    ll sum = 0;
    ll cnt = 0;
    mp[0] = 1; 
    for (int i = 0; i < n; i++)
    {
        sum += v[i];
        if (mp.find(sum - x) != mp.end())
        {
            cnt += mp[sum - x];
        }
        mp[sum]++;
    }
    cout << cnt << endl;
    return 0;
}