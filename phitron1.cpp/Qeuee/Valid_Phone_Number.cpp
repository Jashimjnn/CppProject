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
    set<string> s = {"13", "17", "14", "19", "16", "18", "12", "15"};

    while (t--)
    {
        string str;
        cin >> str;
        int cnt = 0;
        for (int i = 4; i < str.size(); i++)
        {
            if (isdigit(str[i]))
            {
                cnt++;
            }
        }
        if (str.empty())
        {
            N continue;
        }
        if (str.substr(0, 4) == "+880" && str.size() == 14 && cnt == 10)
        {
            string st = str.substr(4, 2);
            if (s.count(st))
            {
                Y
            }
            else
            {
                N
            }
        }
        else
        {
            N
        }
    }
    return 0;
}