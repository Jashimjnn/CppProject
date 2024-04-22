#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
ll longestKSubstr(string s, ll k)
{
    ll lft = 0, rght = 0;
    ll cnt = -1;
    map<char, ll> mp;
    while (rght < s.size())
    {
        mp[s[rght]]++;
        while (mp.size() > k)
        {
            mp[s[lft]]--;
            if (mp[s[lft]] == 0)
            {
                mp.erase(s[lft]);
            }
            lft++;
        }
        if (mp.size() == k)
        {
            cnt = max(cnt, rght - lft + 1);
        }
        rght++;
    }
    return cnt;
}
int main()
{
    string str;
    ll k;
    cin >> str >> k;
    ll cnt = longestKSubstr(str, k);
    cout << cnt << endl;
    return 0;
}