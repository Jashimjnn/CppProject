#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    string str, str1;
    cin >> str;
    cin >> str1;
    ll n = str.size(), m = str1.size();
    vector<ll> v(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    auto fun = [&](ll mid)
    {
        vector<bool> v1(n + 1);
        for (ll i = 0; i < mid; i++)
        {
            v1[v[i]] = true;
        }
        ll j = 0;
        bool flag = false;
        for (ll i = 0; i < n; i++)
        {
            if (str[i] == str1[j] && !v1[i + 1])
            {
                j++;
            }
            if (j == m)
            {
                flag = true;
                break;
            }
        }
        return flag;
    };
    ll left = 0, right = n, mid, ans = 0;
    while (left <= right)
    {
        mid = left + (right - left) / 2;
        if (fun(mid))
        {
            ans = mid;
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    cout << ans << '\n';
    return 0;
}