#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
ll Jashim()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    map<ll, ll> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        mp[v[i]]++;
    }
    ll cnt = 0;
    for (auto va : mp)
    {
        cnt+=va.second/3;
    }
    return cnt;
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll cnt = Jashim();
        cout<<cnt<<endl;
    }
    return 0;
}