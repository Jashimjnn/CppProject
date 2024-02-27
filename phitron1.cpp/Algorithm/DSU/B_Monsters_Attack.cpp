#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
const int X = 3e5 + 10;
vector<int> v(X), v1(X);

void display()
{
    int n, k;
    cin >> n >> k;
    vector<int> v2(n+1,0);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
        v2[abs(v1[i])] += v[i];
    }
    int flag = k;
    for (int i = 1; i <= n; i++)
    {
        if (flag < v2[i])
        {
            N;
            return;
        }

        flag -= v2[i];
        flag += k;
    }
    Y;
}
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        display();
    }
}
