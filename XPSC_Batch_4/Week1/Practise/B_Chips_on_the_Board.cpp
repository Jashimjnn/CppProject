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
        vector<ll> v(n), v1(n);
        ll sum=0,sum1=0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            sum+=v[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> v1[i];
            sum1+=v1[i];
        }
        sort(v.begin(),v.end());
        sort(v1.begin(),v1.end());
        ll x = v1[0]*n;
        sum = sum+x;
        ll y = v[0]*n;
        sum1 = sum1+y;
        ll mn = min(sum,sum1);
        cout << mn << endl;
    }
    return 0;
}