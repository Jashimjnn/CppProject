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

    ll sum = 0;
    ll lft = 0, rght = 0, ans = 0;

    while (rght < n)
    {
        sum += a[rght];
        if (sum <= s)
        {
            ans = max(ans, rght - lft + 1);
        }
        else
        {
            sum -= a[lft];
            lft++;
        }
        rght++;
    }

    cout << ans <<endl;
    return 0;
}