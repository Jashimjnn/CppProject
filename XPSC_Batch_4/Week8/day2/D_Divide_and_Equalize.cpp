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
        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        map<ll, ll> mp;
        for (ll i = 0; i < n; i++)
        {

            for (ll j = 2; j * j <= a[i]; j++)
            {
                if (a[i] % j == 0)
                {
                    while (a[i] % j == 0)
                    {
                        mp[j]++;
                        a[i] /= j;
                    }
                }
            }
            if (a[i] > 1)
            {
                mp[a[i]]++;
            }
        }

        bool flag = true;

        for (auto [x, y] : mp)
        {
            if (y % n != 0)
            {
                flag = false;
                break;
            }
        }

        if (flag==true)
        {
            Y;
        }
        else
        {
            N;
        }
    }

    return 0;
}