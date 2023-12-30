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
        set<string> s = {"13", "17", "14", "19", "16", "18", "12", "15"};
        string str;
        cin >> str;
        ll cnt = 0;
        for (int i = 4; i < str.size(); i++)
        {
            if (isdigit(str[i]))
            {
                cnt++;
            }
        }
        if (str.substr(0, 4) == "+880")
        {
            string st = str.substr(4, 2);
            if (s.count(st) && cnt == 10)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}