#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
const ll mx = (1 << 15);
vector<ll> all_palindromes;

void palindrome()
{
    for (int i = 0; i < mx; i++)
    {
        string s = to_string(i);
        ll len = s.size();
        bool flag = true;
        for (int i = 0; i < (len / 2); i++)
        {
            if (s[i] != s[len - i - 1])
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            all_palindromes.push_back(i);
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    palindrome();

    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> cnt(mx), a;
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            cnt[x]++;
            a.push_back(x);
        }

        ll ans = n;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < all_palindromes.size(); j++)
            {
                int curr = (a[i] ^ all_palindromes[j]);
                ans += cnt[curr];
            }
        }

        cout << (ans / 2) << '\n';
    }
    return 0;
}