#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    int t;
    map<int, int> mp;
    vector<int> v;
    while (cin >> t)
    {
        mp[t]++;
        v.push_back(t);
    }
    set<int> s;
    for (auto ele : v)
    {
        if (s.find(ele) == s.end())
        {
            cout << ele << " " << mp[ele] << endl;
        }
        s.insert(ele);
    }
    return 0;
}