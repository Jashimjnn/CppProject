#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    ll lft = 0, rght = 0;
    ll cnt = 0;
    map<ll, ll> mp;
    while (rght < n)
    {
        mp[v[rght]]++;
        while (mp.size() > k)
        {
            mp[v[lft]]--;
            if (mp[v[lft]] == 0)
            {
                mp.erase(v[lft]);
            }
            lft++;
        }
        cnt += (rght - lft + 1);
        rght++;
    }
    cout << cnt << endl;
    return 0;
}