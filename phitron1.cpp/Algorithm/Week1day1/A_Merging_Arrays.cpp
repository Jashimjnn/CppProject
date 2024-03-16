#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    ll n, m;
    cin >> n >> m;

    vector<ll> v(n), v1(m);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    for (int i = 0; i < m; i++)
    {
        cin >> v1[i];
    }

    vector<ll> v2;
    ll i = 0, j = 0;

    while (i < n && j < m)
    {
        if (v[i] < v1[j])
        {
            v2.push_back(v[i]);
            i++;
        }
        else
        {
            v2.push_back(v1[j]);
            j++;
        }
    }
    while (i < n)
    {
        v2.push_back(v[i]);
        i++;
    }
    while (j < m)
    {
        v2.push_back(v1[j]);
        j++;
    }
    for (int i = 0; i < v2.size(); i++)
    {
        cout << v2[i] << " ";
    }

    cout << endl;

    return 0;
}