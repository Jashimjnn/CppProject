#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
vector<ll> v1;
ll display(vector<ll> &v, ll n)
{
    ll cnt = 0;
    for (int i = 1; i < n - 1; i++)
    {
        if (v[i] > v[i - 1] && v[i] > v[i + 1])
        {
            cnt++;
            v1.push_back(v[i]);
            v1.push_back(v[i - 1]);
            v1.push_back(v[i + 1]);
        }
        else
        {
            v1.push_back(v[i]);
        }
    }
    if(cnt==0)
    {
        return -1;
    }
    ll sz = v1.size()-n;
    return sz;
}
int main()
{
    ll t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        ll n;
        cin >> n;
        vector<ll> v(n);
        for (int j = 0; j < n; j++)
        {
            cin >> v[j];
        }
        ll ans = display(v, n);

        // ll sz = n-(ans+1);
        cout << "Case " << i << ": " << ans << endl;
    }
    return 0;
}
