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
        vector<ll> v(n + 1);
        bool flag = true;
        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];
            bool flag1 = false;
            //ll x = i+1;
            for (int j = i + 1; j >= 2; j--)
            {
                if (v[i] % j!=0)
                {
                    flag1 = true;
                    break;
                }
            }
            flag &= flag1;
        }
        if (flag == true)
        {
            Y;
        }
        else
        {
            N;
        }
    }
    return 0;
}