#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    ll k;
    cin >> k;
    ll lft = 0, rght = 0;
    ll sum = 0;
    ll ans = 0;
    while (rght < n)
    {
        sum += v[rght];
        if ((rght - lft + 1) == k)
        {
            ans = max(ans, sum);
            sum-=v[lft];
            lft++;
            rght++;
        }
        else
        {
            rght++;
        }
    }
    cout << ans << endl;
    return 0;
}