#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
ll display()
{
    ll n, k;
    cin >> n >> k;
    ll x;
    if ((4 * n - 2) == k)
    {
        x = ceil(k / 2.0) + 1;
    }
    else
    {
        x = ceil(k / 2.0);
    }
    return x;
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll ans = display();
        cout<<ans<<endl;
    }
    return 0;
}
