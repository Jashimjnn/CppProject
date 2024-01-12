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
        while (ss >> word)
        {
            mp[word]++;
        }
        int mx = 0;
        for (auto val : mp)
        {
            mx = max(mx, val.second);
        }
        vector<pair<string, int>> v;
        for (auto val : mp)
        {
            if (val.second == mx)
            {
                v.push_back({val.first, val.second});
            }
        }
        if (v.size() >= 2)
        {
            cout << v[1].first << " " << v[1].second << endl;
        }
        else
        {
            cout << v[0].first << " " << v[0].second << endl;
        }

    }
    return 0;
}
