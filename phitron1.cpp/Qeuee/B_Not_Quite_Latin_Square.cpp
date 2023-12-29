#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    int t;
    cin >> t;
    char ch;
    while (t--)
    {
        string str1, str2, str3;
        cin >> str1 >> str2 >> str3;
        map<char, int> mp;
        for (char ch : str1)
        {
            if (ch != '?')
            {
                mp[ch]++;
            }
        }
        for (char ch : str2)
        {
            if (ch != '?')
            {
                mp[ch]++;
            }
        }
        for (char ch : str3)
        {
            if (ch != '?')
            {
                mp[ch]++;
            }
        }
        for (auto ch : mp)
        {
            if (ch.second == 2)
            {
                cout << ch.first << endl;
            }
        }
    }
    return 0;
}