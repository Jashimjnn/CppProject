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
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        if (n == 1)
        {
            if (v[0] != 1)
            {
                N;
                continue;
            }
            else
            {
                Y;
                continue;
            }
        }
        if(v[0]!=n)
        {
            N;
            continue;
        }
        ll cnt = count(v.begin(), v.end(), v[0]);
        if (n == v[0] && n == cnt)
        {
            Y;
            continue;
        }
        vector<ll> v1, v2;
        for (int i = 1; i < n; i++)
        {
            if (v[i - 1] - v[i] != 0)
            {
                v1.push_back(v[i - 1] - v[i]);
            }
        }

        ll r = n - 1;
        for (int i = n - 2; i >= 0; i--)
        {
            if (v[i] != v[i + 1])
            {
                v2.push_back(r - i);
                r = i;
            }
        }
        bool flag = true;
        for (int i = 0; i < v1.size(); i++)
        {
            if (v1[i] != v2[i])
            {
                flag = false;
                break;
            }
        }
        if (flag==true)
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
