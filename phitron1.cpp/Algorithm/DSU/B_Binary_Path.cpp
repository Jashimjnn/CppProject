#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
void Jashim(ll n, string str1, string str2)
{
    map<string, ll> mp;
    for (int i = 0; i < n; i++)
    {
        string tmp = str1.substr(0, i + 1) + str2.substr(i);
        mp[tmp]++;
    }
    auto ans = mp.begin();
    cout << ans->first << endl;
    cout << ans->second << endl;
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        string str1, str2;
        cin >> str1 >> str2;
        Jashim(n, str1, str2);
    }
    return 0;
}