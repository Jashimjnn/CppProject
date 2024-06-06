/**
 *    author:  Mohammad Jashim Uddin
 **/
#include <iostream>
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define yy cout << "Yes" << endl;
#define N cout << "NO" << endl;
#define nn cout << "No" << endl;
#define one cout << "1" << endl;
#define onee cout << "-1" << endl;
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

const int X = 1e5 + 17;
ll a[X], l[X], r[X], b[X], c[X], d[X], x, y, n, m, k, g, i;
int main()
{
    cin >> n >> m >> k;
    for (i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (i = 1; i <= m; i++)
    {
        cin >> l[i] >> r[i] >> d[i];
    }
    for (i = 1; i <= k; i++)
    {
        cin >> x >> y;
        b[x]++;
        b[y + 1]--;
    }
    for (i = 1; i <= m; i++)
    {
        b[i] += b[i - 1];
        c[l[i]] += b[i] * d[i];
        c[r[i] + 1] -= b[i] * d[i];
    }
    for (i = 1; i <= n; i++)
    {
        c[i] += c[i - 1];
        cout << c[i] + a[i] << " ";
    }
}