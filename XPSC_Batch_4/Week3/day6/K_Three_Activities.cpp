#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
#define mp make_pair
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> v(n), v1(n), v2(n);
        vector<pair<ll, ll>> ve, ve1, ve2;
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
            ve.push_back(mp(v[i], i));
        }
        for (ll i = 0; i < n; i++)
        {
            cin >> v1[i];
            ve1.push_back(mp(v1[i], i));
        }
        for (ll i = 0; i < n; i++)
        {
            cin >> v2[i];
            ve2.push_back(mp(v2[i], i));
        }
        sort(ve.rbegin(), ve.rend());
        sort(ve1.rbegin(), ve1.rend());
        sort(ve2.rbegin(), ve2.rend());
        ll cnt=0;
        for (ll i = 0; i < 3; i++)
        {
            for (ll j = 0; j < 3; j++)
            {
                for (ll k = 0; k < 3; k++)
                {
                    if (ve[i].second != ve1[j].second and ve[i].second != ve2[k].second and ve1[j].second != ve2[k].second)
                    {
                        cnt = max(ve[i].first + ve1[j].first + ve2[k].first, cnt);
                    }
                }
            }
        }
        cout << cnt << endl;
    }
    return 0;
}