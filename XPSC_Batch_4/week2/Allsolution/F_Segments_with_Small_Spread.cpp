#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    ll n;
    ll k;
    cin >> n >> k;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    ll lft = 0, rght = 0, ans = 0;
    multiset<ll> ml;

    while (rght < n)
    {
        ml.insert(a[rght]);
        ll mn, mx;
        mn = *ml.begin(), mx = *ml.rbegin();
        if ((mx - mn) <= k)
        {
            ans += (rght - lft + 1);
        }
        else
        {
            while (lft < rght)
            {
                mn = *ml.begin(), mx = *ml.rbegin();
                if ((mx - mn) <= k)
                {
                    break;
                }
                auto it = ml.find(a[lft]);
                ml.erase(it);
                lft++;
            }
            mn = *ml.begin(), mx = *ml.rbegin();
            if ((mx - mn) <= k)
            {
                ans += (rght - lft + 1);
            }
        }
        rght++;
    }

    cout << ans << endl;

    return 0;
}