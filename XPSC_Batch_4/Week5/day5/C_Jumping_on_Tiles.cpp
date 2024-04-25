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
        string str;
        cin >> str;
        map<char, vector<ll>> mp;
        for (int i = 0; i < str.size(); i++)
        {
            mp[str[i]].push_back(i);
        }
        ll flag;
        if (str[0] < str[str.size() - 1])
        {
            flag = 1;
        }
        else
        {
            flag = -1;
        }
        vector<ll> v1;

        for (auto c = str[0]; c != str[str.size() - 1] + flag; c += flag)
        {
            for (auto x : mp[c])
            {
                v1.push_back(x);
            }
        }

        ll ans = 0;
        for (int i = 1; i < v1.size(); i++)
        {
            ans += abs(str[v1[i]] - str[v1[i - 1]]);
        }
        cout << ans << " " << v1.size() << '\n';
        for (auto x : v1)
        {
            cout << x + 1 << " ";
        }
        cout << endl;
    }
    return 0;
}