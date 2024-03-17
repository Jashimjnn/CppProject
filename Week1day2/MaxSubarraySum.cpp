#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
ll maximumSumSubarray(ll k, vector<ll> &Arr, ll n)
{
    ll lft = 0, rght = 0;
    ll sum = 0, ans = 0;
    while (rght < n)
    {
        sum += Arr[rght];
        if ((rght - lft + 1) == k)
        {
            ans = max(ans, sum);
            sum -= Arr[lft];
            lft++;
            rght++;
        }
        else
        {
            rght++;
        }
    }
    return ans;
}
int main()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    ll ans = maximumSumSubarray(k, v, n);
    cout << ans << endl;
    return 0;
}