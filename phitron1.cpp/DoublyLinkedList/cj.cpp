#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
bool compare(pair<int, int> &p1, pair<int, int> &p2)
{
    if (p1.first < p2.first)
        return 1;
    else if (p1.first == p2.first)
        return (p1.second > p2.second);
    return 0;
}

void solve()
{
    int n;
    cin >> n;
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &v[i].first, &v[i].second);
    }
    sort(v.begin(), v.end(), compare);
    for (auto &i : v)
        printf("%d %d \n", i.first, i.second);
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        solve();
    }
}