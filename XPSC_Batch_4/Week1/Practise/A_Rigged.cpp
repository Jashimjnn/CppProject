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
        int n;
        cin >> n;
        vector<pair<int, int>> pr;
        int mini = INT_MAX;
        int p = 0, q = 0;
        for (int i = 0; i < n; i++)
        {
            int x, y;
            cin >> x >> y;
            if (i == 0)
            {
                p = x, q = y;
            }
            else
            {
                pr.push_back(make_pair(x, y));
            }
        }
        int mx = INT_MIN;
        int ans = 0;
        for (auto it : pr)
        {
            if (it.first >= p && it.second >= q)
            {
                ans = -1;
                break;
            }
        }
        if (ans == -1)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << p << endl;
        }
    }
    return 0;
}