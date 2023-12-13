#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    int n, m;
    cin >> n >> m;

    vector<int> v(m);
    for (int i = 0; i < m; ++i)
    {
        cin >> v[i];
    }

    sort(v.begin(),v.end());

    int mi = v[n - 1] - v[0];

    for (int i = 1; i <= m - n; i++)
    {
        int x = v[i+n - 1] - v[i];
        mi = min(mi, x);
    }

    cout << mi << endl;

    return 0;
}