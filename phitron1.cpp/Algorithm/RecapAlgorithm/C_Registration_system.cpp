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
    string str;
    map<string, ll> mp;
    while (t--)
    {
        cin >> str;
        if (mp[str] == 0)
        {
            cout << "OK" << endl;
            mp[str] = 1;
        }
        else
        {
            cout << str << mp[str] << endl;
            mp[str]++;
        }
    }
    return 0;
}