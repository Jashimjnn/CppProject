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
        ll n;
        cin >> n;
        vector<ll>v(n+1);
        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];
        }
        ll cnt = v[1] - 1;
        ll idx = cnt;
        for (int i = 2; i <= n; i++)
        {
            if (idx + i < v[i])
            {
                ll flag = v[i] - (idx + i);
                idx += flag;
                cnt += flag;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}