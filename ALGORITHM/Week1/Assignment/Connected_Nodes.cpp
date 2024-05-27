#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
vector<int> v[10000005];
int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    int q;
    cin >> q;
    vector<int> v1;
    while (q--)
    {
        int x;
        cin >> x;
        for (auto va : v[x])
        {
            v1.push_back(va);
        }
        if (v1.size() == 0)
        {
            cout << -1 << endl;
        }
        else
        {
            sort(v1.rbegin(), v1.rend());
            for (auto va : v1)
            {
                cout << va << " ";
            }
            cout << endl;
        }
        v1.clear();
    }
    return 0;
}