#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    ll n, s;
    cin >> n >> s;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    ll lft = 0, rght = 0;
    ll cnt = LLONG_MAX, sum = 0;
    while (rght < n)
    {
        sum += v[rght];
        while (sum >= s)
        {
            cnt = min(cnt, rght - lft + 1);
            sum -= v[lft];
            lft++;
        }

        rght++;
    }
    if (cnt != LLONG_MAX)
    {
        cout << cnt << endl;
    }
    else
    {
        cout << -1 << endl;
    }
    return 0;
}