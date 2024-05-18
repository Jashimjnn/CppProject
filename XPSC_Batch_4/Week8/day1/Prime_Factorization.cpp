#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    ll n = 20;
    vector<bool> prime(n + 1, true);
    for (ll i = 2; i * i <= n; i++)
    {
        if (prime[i])
        {
            for (ll j = i + i; j <= n; j += i)
            {
                prime[j] = false;
            }
        }
    }
    vector<ll> all_primes;
    for (ll i = 2; i <= n; i++)
    {
        if (prime[i])
        {
            all_primes.push_back(i);
        }
    }

    for (auto val : all_primes)
    {
        cout << val << " ";
    }
    cout << endl;
    cout << endl;
    cout << endl;

    map<ll, ll> cnt;
    ll x, idx = 0;
    cin >> x;
    while (x > 1)
    {
        if (x % all_primes[idx] == 0)
        {
            cnt[all_primes[idx]]++;
            x /= all_primes[idx];
        }
        else
        {
            idx++;
        }
    }
    vector<ll>v2;
    for (auto [x, y] : cnt)
    {
        //cout << x << " " << y << '\n';
        ll i = x;
        for(int j=0;j<y;j++)
        {
            v2.push_back(x);
        }
    }
    for(auto e:v2)
    {
        cout<<e<<" ";
    }
    cout<<endl;
    return 0;
}