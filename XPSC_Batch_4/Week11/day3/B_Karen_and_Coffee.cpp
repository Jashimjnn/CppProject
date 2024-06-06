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
const int X = 200007;
int x, y, i, n, k, q, a[X], s[X];
int main()
{
    cin >> n >> k >> q;
    while (n--)
    {
        cin >> x >> y;
        a[x]++;
        a[y + 1]--;
    }
    for (i = 1; i < X; i++)
    {
        a[i] += a[i - 1];
        s[i] += s[i - 1] + (a[i] >= k);
    }
    while (q--)
    {
        cin >> x >> y;
        cout << s[y] - s[x - 1] << endl;
    }
}