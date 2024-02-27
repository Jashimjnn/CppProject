#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
ll Jashim_Unique(vector<ll> &v,ll n)
{
    ll mx = 1;
    ll flag = 1;
    for (ll i = 1; i < n;i++)
    {
        if (v[i] > v[i - 1])
        {
            flag++;
        }
        else
        {
            flag = 1;
        }
        mx = max(mx, flag);
    }
    return mx;
}
int main()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    ll ans = Jashim_Unique(v,n);
    cout<<ans<<endl;
    return 0;
}