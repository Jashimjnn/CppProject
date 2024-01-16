#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    int n;
    cin >> n;
    cin.ignore();
    while (n--)
    {
        string str;
        getline(cin, str);
        stringstream ss(str);
        map<string, int> mp;
        string word;
        string tmp;
        int mx = 0, cnt = 0;
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