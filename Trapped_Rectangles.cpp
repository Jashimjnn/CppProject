#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin >> t;
    for (int j = 1; j <= t; j++)
    {
        ll n;
        cin >> n;
        vector<ll> v(n);
        vector<ll> v1(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        for (int i = 0; i < n; i++)
        {
            v1[i]=v[i];
        }
        ll mx = 0, ans = 0;
        sort(v.begin(), v.end());
        sort(v1.begin(), v1.end());
        for (int i = 0; i < n; i++)
        {
            // for (int k = i + 1; k <= n; k++)
            // {
                ans += (v[i] * v1[i]);
                mx = max(mx, ans);
           // }
        }
        cout << "Case " << j << ": " << mx << endl;
    }
}