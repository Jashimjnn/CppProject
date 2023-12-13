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

    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i].first >> v[i].second;
    }

    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n;j++)
        {
            if (i != j && v[i].first == v[j].second)
            {
                cnt++;
            }
        }
    }

    cout << cnt << endl;
    return 0;
}