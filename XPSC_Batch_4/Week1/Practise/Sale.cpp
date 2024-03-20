#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
void fun()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    ll idx;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vector<ll> pre(n);
    pre[n - 1] = v[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        pre[i] = v[i] + pre[i + 1];
    }
    ll mx = 0;
    sort(pre.rbegin(), pre.rend());
    for (int i = 0; i < n; i++)
    {
        if (i < n - 1)
        {
            if ((mx + 2 * v[i]) > pre[i + 1])
            {
                mx += 2 * v[i];
                break;
            }
            else
            {
                mx += v[i];
            }
        }
        else
        {
            mx += 2 * v[i];
        }
    }
    cout<<mx<<endl;;
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        fun();
    }
    return 0;
}
