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
        vector<ll> v(2 * n);
        ll cnt=0;
        for (int i = 0; i < 2 * n; i++)
        {
            cin >> v[i];
            if(v[i]%2==1)
            {
                cnt++;
            }
        }
        if (n == cnt)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}