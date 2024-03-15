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
    vector<ll> v(n), v1(m), v2(n + m);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> v1[i];
    }
    ll i = 0, j = 0;
    while (i < v.size() || j < v1.size())
    {
        if (v[i] < v1[j])
        {
            v2[i + j] = v[i];
            i++;
        }
        else
        {
            v2[i + j] = v1[j];
            j++;
        }
    }
    for(int i=0;i<(n+m);i++)
    {
        cout<<v2[i]<<" ";
    }
    cout<<endl;
    return 0;
}