#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    ll n;
    ll s;
    cin >> n >> s;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    ll lft = 0, rght = 0, ans = 0, sum = 0;

    while (rght < n)
    {
        sum += a[rght];
        if (sum <= s)
        {
            ans += (rght - lft + 1);
        }
        else
        {
            while (sum > s && lft < rght)
            {
                sum -= a[lft];
                lft++;
            }
            if (sum <= s)
            {
                ans += (rght - lft + 1);
            }
        }
        rght++;
    }
    cout << ans <<endl;

    return 0;
}