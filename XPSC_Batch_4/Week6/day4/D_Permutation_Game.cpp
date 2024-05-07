#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
void solve()
{
    ll n, k, pb, ps;
    cin >> n >> k >> pb >> ps;
    vector<ll> v(n + 1);
    vector<ll> v1(n + 1);

    for (ll i = 1; i <= n; i++)
    {
        cin >> v[i];
    }

    for (ll i = 1; i <= n; i++)
    {
        cin >> v1[i];
    }
    ll shuru1 = v1[pb];
    ll shuru2 = v1[ps];

    vector<ll> kothai1;

    kothai1.push_back(pb);
    ll ekhon = pb;
    ll pore = v[pb];
    while (pore != pb)
    {
        kothai1.push_back(pore);
        ekhon = pore;
        pore = v[ekhon];
    }

    vector<ll> kothai2;

    kothai2.push_back(ps);
    ll ekhon1 = ps;
    ll pore1 = v[ps];
    while (pore1 != ps)
    {
        kothai2.push_back(pore1);
        ekhon1 = pore1;
        pore1 = v[ekhon1];
    }

    ll age = 0;

    for (ll i = 0; i < kothai1.size(); i++)
    {
        if (k < i + 1)
        {
            break;
        }
        ll cur = age;
        cur += (k - i) * v1[kothai1[i]];
        shuru1 = max(shuru1, cur);
        age += v1[kothai1[i]];
    }
    ll age1 = 0;

    for (ll i = 0; i < kothai2.size(); i++)
    {
        if (k < i + 1)
        {
            break;
        }
        ll cur = age1;
        cur += (k - i) * v1[kothai2[i]];
        shuru2 = max(shuru2, cur);
        age1 += v1[kothai2[i]];
    }
    if (shuru1 > shuru2)
    {
        cout << "Bodya"<<endl;;
    }
    else if (shuru1 == shuru2)
    {
        cout << "Draw"<<endl;
    }
    else
    {
        cout << "Sasha"<<endl;
    }
}

int main()
{
    ll t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}