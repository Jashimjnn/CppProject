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
    ll m;
    cin >> m;
    vector<ll> v1(m);
    for (int i = 0; i < m; i++)
    {
        cin >> v1[i];
    }
    sort(v.begin(), v.end());
    sort(v1.begin(), v1.end());
    ll cnt = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (abs(v[i] - v1[j]) <= 1)
            {
                v1[j] = 100000;
                cnt++;
                break;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}