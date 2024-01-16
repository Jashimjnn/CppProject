#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
ll display()
{
    ll n, k, x;
    cin >> n >> k >> x;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    ll sum = 0;
    ll flag = n - x;
    sort(v.begin(), v.end());
    for (ll i = 0; i < n; i++)
    {
        if (i < flag)
        {
            sum += v[i];
        }
        else
        {
            sum -= v[i];
        }
    }
    ll ans = sum;
    for (ll i = n - 1; i >= n - k; i--)
    {
        if (i >= flag)
        {
            sum += v[i];
            if (flag - 1 >= 0)
            {
                sum -= 2 * v[flag - 1];
            }
            flag--;
            ans = max(ans, sum);
        }
    }
    return ans;
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll ans = display();
        cout << ans << endl;
    }
    return 0;
}