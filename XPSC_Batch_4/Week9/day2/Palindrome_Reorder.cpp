#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    string str;
    cin >> str;
    map<char, ll> mp;
    for (char ch : str)
    {
        mp[ch]++;
    }
    ll cnt = 0;
    char ch;
    for (auto x : mp)
    {
        if (x.second % 2)
        {
            ch = x.first;
            cnt++;
        }
    }
    if ((str.size() % 2 == 0 and cnt > 0) or cnt > 1)
    {
        cout << "NO SOLUTION";
    }
    else
    {
        string tmp = "";
        for (auto x : mp)
        {
            for (int i = 1; i <= x.second / 2; i++)
            {
                tmp += x.first;
            }
        }
        cout << tmp;
        if (str.size() % 2)
        {
            cout << ch;
        }
        reverse(tmp.begin(), tmp.end());
        cout << tmp;
    }
    return 0;
}