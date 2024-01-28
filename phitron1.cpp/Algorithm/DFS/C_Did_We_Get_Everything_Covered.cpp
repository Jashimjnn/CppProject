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

    while (t--)
    {
        int n, k, m;
        cin >> n >> k >> m;

        string str;
        cin >> str;

        map<char, int> mp;
        for (int i = 0; i < m; i++)
        {
            mp[str[i]]++;
        }

        bool hasNo = false;
        string noString = "";

        for (char c = 'a'; c < 'a' + k; c++)
        {
            if (mp.find(c) == mp.end() || mp[c] == 0)
            {
                hasNo = true;
                noString += c;
            }
        }

        if (hasNo)
        {
            N
            cout << noString << endl;
        }
        else
        {
            Y
        }
    }

    return 0;
}
