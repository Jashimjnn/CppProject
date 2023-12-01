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
    vector<ll> v;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        v.push_back(x);
    }
    bool flag = false;
    sort(v.begin(),v.end());
    for (int i = 0; i < n-1; i++)
    {
        if (v[i] == v[i + 1])
        {
            flag = true;
            break;
        }
    }
    if (flag==true)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}