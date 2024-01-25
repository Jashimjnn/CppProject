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
    }
    int q;
    cin >> q;
    while (q--)
    {
        int x, y;
        cin >> x >> y;
        vector<int> v1;
        for (auto va : v[x])
        {
            v1.push_back(va);
        }
        bool flag = false;
        for (auto va : v1)
        {
            if (va == y)
            {
                flag = true;
                break;
            }
        }
        if (x == y)
        {
            cout << "YES" << endl;
        }
        else
        {
            if (flag == true)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }

        v1.clear();
    }
    return 0;
}