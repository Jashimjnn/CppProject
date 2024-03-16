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
    vector<int> v(n), v1(m), v2(n + m);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> v1[i];
    }
    int i = 0, j = 0, k = 0;
    while (i < n && j < m)
    {
        if (v[i] < v1[j])
        {
            v2[k++] = v[i++];
        }
        else
        {
            v2[k++] = v1[j++];
        }
    }
    while (i < n)
    {
        v2[k++] = v[i++];
    }
    while (j < m)
    {
        v2[k++] = v1[j++];
    }
    for (int i = 0; i < n + m; i++)
    {
        cout << v2[i] << " ";
    }
    cout << endl;
    return 0;
}