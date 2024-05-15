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
        ll n, k;
        cin >> n >> k;
        ll sum = 0;
        vector<ll> v(n);
        for(auto &x:v)
        {
            cin>>x;
            sum+=x;
        }
        ll sum1 = n * (n + 1) / 2;
        v.push_back(sum1 - sum);
        k = k % (n + 1);
        for (int i = 0; i < n; i++)
        {
            cout << v[(i - k + n + 1) % (n + 1)] << " ";
        }
        cout << endl;
    }
    return 0;
}