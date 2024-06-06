#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin >> n;
    vector<ll> v(n), v1;
    ll sum=0;
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
        sum+=v[i];
        v1.push_back(sum);
    }
    ll q;
    cin >> q;
    while (q--)
    {
        ll l, r;
        cin >> l >> r;
        l--;
        r--;
        if (v[l] == 0 or v[r] == 0)
        {
            cout << "0\n";
        }
        else if((r-l)!=(v1[r]-v1[l]))
        {
            cout<<"0\n";
        }
        else
        {
            cout << "1\n";
        }
    }
}