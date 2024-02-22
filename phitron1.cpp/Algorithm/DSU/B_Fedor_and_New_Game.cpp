#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    ll n, m, k;
    cin >> n >> m >> k;
    vector<ll> v(m + 1);
    for (int i = 0; i < m + 1; i++)
    {
        cin >> v[i];
    }
    ll fr=0;
    for (int i = 0; i < m; i++)
    {
        ll bt = 0;
        for (int j = 0; j < n; j++)
        {
            if (((v[i] >> j) & 1) != ((v[m] >> j) & 1))
            {
                bt++;
            }
        }
        if (bt <= k)
        {
            fr++;
        }
    }
    cout<<fr<<endl;
    return 0;
}