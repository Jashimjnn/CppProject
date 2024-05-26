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
        vector<ll> v(n);
        ll ar[n+1] = {0};
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            ar[v[i]]++;
        }
        ll cnt;
        ll flag = 0;
        for (int i = 0; i <= n; i++)
        {
            flag += (ar[i] == 1);
            if ((flag == 2) || (ar[i] == 0))
            {
                cnt = i;
                break;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}