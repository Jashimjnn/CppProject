#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;

vector<ll> Prime(ll n)
{
    vector<ll> v;
    
    if (n % 2 == 0)
    {
        v.push_back(2);
        while (n % 2 == 0)
        {
            n /= 2;
        }
    }

    for (ll i = 3; i <= sqrt(n); i += 2)
    {
        if (n % i == 0)
        {
            v.push_back(i);
            while (n % i == 0)
            {
                n /= i;
            }
        }
    }

    if (n > 2)
    {
        v.push_back(n);
    }
    return v;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        vector<ll> v = Prime(b);
        bool flag = true;
        for (ll x : v)
        {
            if (a % x != 0)
            {
                flag = false;
                break;
            }
        }
        if (flag==true)
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
