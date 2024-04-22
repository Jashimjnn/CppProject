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

    ll lft = 0, rght = 0;
    ll ans = 0;
    while (lft < n && rght < m)
    {
        ll cnt1 = 0, cnt2 = 0, curr = v[lft];
        while (v[lft] == curr && lft < n)
        {
            cnt1++;
            lft++;
        }

        while (curr > v1[rght] && rght < m)
        {
            rght++;
        }
        while (v1[rght] == curr && rght < m)
        {
            cnt2++;
            rght++;
        }
        ans += (cnt1 * cnt2);
    }

    cout << ans << endl;

    return 0;
}