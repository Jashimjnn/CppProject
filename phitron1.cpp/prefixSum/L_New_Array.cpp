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
    vector<ll> v1(n);
    vector<ll> v2;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
    }
    v2 = v1;
    v2.insert(v2.begin() + n, v.begin(), v.end());
    for (int i = 0; i < (n + n); i++)
    {
        cout << v2[i] << " ";
    }

    return 0;
}