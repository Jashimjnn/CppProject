#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    ll n, m;
    cin >> n >> m;
    vector<ll> v(n), v1(m);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> v1[i];
    }
    sort(v.begin(), v.end());

    for (int i = 0; i < m; i++)
    {
        ll ans = 0;
        for (int j = 0; j < n; j++)
        {
            if (v[j] <= v1[i])
            {
                ans++;
            }
            else
            {
                break;
            }
        }
        cout << ans << " ";
    }
    cout << endl;
    return 0;
}