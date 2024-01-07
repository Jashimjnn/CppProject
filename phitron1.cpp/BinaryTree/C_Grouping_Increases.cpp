#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
ll display()
{
    ll n;
    cin >> n;
    vector<ll> v;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        v.push_back(x);
    }
    vector<ll>cnt1(n);
    cnt1[0] = 0;
    for (int i = 1; i < n; i++)
    {
        cnt1[i] = cnt1[i - 1] + (v[i] > v[i - 1]);
    }
    vector<ll>cnt2(n);
    cnt2[n - 1] = 0;
    for (int i = n - 2; i >= 0; i--)
    {
        cnt2[i] = cnt2[i + 1] + (v[i] < v[i + 1]);
    }
    ll mn = min(cnt1[n-1], cnt2[0]);
    //ll mn=INT_MAX;
    for (int i = 0; i < n - 1; i++)
    {
        mn = min(mn, (cnt1[i] + cnt2[i + 1]));
    }
    return mn;
    
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        int ans = display();
        cout << ans << endl;
    }
    return 0;
}