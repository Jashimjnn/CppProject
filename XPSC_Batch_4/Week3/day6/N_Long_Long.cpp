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
        vector<ll> v(n);
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            sum += abs(v[i]);
        }
        ll cnt = 0;
        bool flag = false;
        for (int i = 0; i <= n; i++)
        {
            if (flag == true)
            {
                if (i==n || v[i] > 0)
                {
                    cnt++;
                    flag = false;
                }
            }
            else
            {
                if(v[i]<0)
                {
                    flag = true;
                }
            }
        }
        cout << sum << " " << cnt << endl;
    }
    return 0;
}