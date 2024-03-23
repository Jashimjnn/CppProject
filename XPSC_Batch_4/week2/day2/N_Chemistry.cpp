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
        ll n, k;
        cin >> n >> k;
        string str;
        cin >> str;
        map<char, ll> mp;
        if ((n == 1 && k == 0) || (n == 2 && k == 1))
        {
            cout << "YES" << endl;
            continue;
        }
        for (int i = 0; i < str.size(); i++)
        {
            mp[str[i]]++;
        }
        ll cnt = 0;
        for (auto it : mp)
        {
            if (it.second % 2 != 0)
            {
                cnt++;
            }
        }
        if (cnt <= k+1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
