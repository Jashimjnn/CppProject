#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define y cout << "Yes" << endl;
#define N cout << "NO" << endl;
#define nn cout << "No" << endl;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> v(n);
        for (auto &x:v)
        {
            cin >> x;
        }
        sort(v.begin(), v.end());
        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            if (v[i] % v[0] != 0 && v[i] % v[1] != 0)
            {
                nn;
                flag = false;
                break;
            }
        }
        if (flag==true)
        {
            y;
        }
    }
    return 0;
}
