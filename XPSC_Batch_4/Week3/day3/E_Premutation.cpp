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
        vector<vector<ll>> v(n, vector<ll>(n - 1));
        vector<ll> v1(n, 0);
        vector<ll> cnt(n + 1, 0);
        for (int i = 0; i < n; i++)
        {
            v1[i] = i + 1;
            for (int j = 0; j < n - 1; j++)
            {
                cin >> v[i][j];
                if (j == 0)
                {
                    cnt[v[i][j]]++;
                }
            }
        }
        for (int i = 1; i <= n; i++)
        {
            if (cnt[i] == n - 1)
            {
                v1[0] = i;
                break;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (v[i][0] != v1[0])
            {
                for (int j = 0; j < n - 1; j++)
                {
                    v1[j + 1] = v[i][j];
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << v1[i] << ' ';
        }
        cout << endl;
    }
    return 0;
}