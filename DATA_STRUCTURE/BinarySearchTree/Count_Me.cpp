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
    cin.ignore();

    while (t--)
    {
        string str;
        getline(cin, str);
        map<string, int> mp;
        stringstream ss(str);
        string word;
        int mx = 0, cnt = 0;
        string tmp;
        while (ss >> word)
        {
            mp[word]++;
            mx = max(mx, mp[word]);
            if (mx > cnt)
            {
                tmp = word;
                cnt = mx;
            }
        }
        cout << tmp << " " << mp[tmp] << endl;
    }

    return 0;
}
