#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    ll k;
    cin >> k;
    list<ll> lst;
    vector<ll> v1;
    ll lft = 0, rght = 0;
    while (rght < n)
    {
        if (v[rght] < 0)
        {
            lst.push_back(v[rght]);
        }
        if ((rght - lft + 1) == k)
        {
            ll flag;
            if (lst.empty())
            {
                flag = 0;
            }
            else
            {
                flag = lst.front();
            }
            v1.push_back(flag);
            if (v[lft] < 0 && !lst.empty())
            {
                lst.pop_front();
            }
            lft++;
        }
        rght++;
    }
    for (auto c : v1)
    {
        cout << c << " ";
    }
    return 0;
}