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
        vector<ll>v(n);

        ll even1 = 0, even2 = 0, odd1 = 0, odd2 = 0;
        for (ll i = 0; i < n; ++i)
        {
            cin >> v[i];
            if (i % 2 == 0)
            {
                if (v[i] % 2 == 1)
                {
                    odd1 = 1;
                }
                else
                {
                     even1 = 1;
                }
            }
            else
            {
                if (v[i] % 2 == 1)
                {
                    odd2 = 1;
                }
                else
                {
                    even2 = 1;
                }
            }
        }

        if (even1 && odd1)
        {
            cout << "NO"<<endl;
        }
        else if (even2 && odd2)
        {
            cout << "NO"<<endl;;
        }
        else
        {
            cout << "YES"<<endl;;
        }
    }
    return 0;
}