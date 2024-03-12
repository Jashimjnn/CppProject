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
        vector<ll> v(n+1);
        vector<ll> pre(n+1);
        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];
        }
        pre[1]=v[1];
        for(int i=2;i<=n;i++)
        {
            pre[i]=v[i]+pre[i-1];
        }
        while (q--)
        {
            ll l,r,k;
            cin >> l >> r >> k;
            ll ans = pre[r]-pre[l];
            if (ans % 2 == 1)
            {
                Y;
            }
            else
            {
                N;
            }
        }
    }
    return 0;
}