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

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vector<int> v1(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
    }
    int mx = *max_element(v.begin(), v.end());
    const int inf = int(1e9);
    vector<int> v2(mx + 1, inf);
    for (int i = 0; i < n; i++)
    {
        v2[v[i]] = min(v2[v[i]], v[i] - v1[i]);
    }
    for (int i = 0; i < mx; i++)
    {
        v2[i + 1] = min(v2[i + 1], v2[i]);
    }
    vector<int> v3(mx + 1);
    for (int i = 0; i <= mx; i++)
    {
        v3[i] = (v2[i] <= i ? v3[i - v2[i]] + 1 : 0);
    }
    int64_t ans = 0;
    for (int i = 0; i < m; i++)
    {
        int y;
        cin >> y;
        if (y > mx)
        {
            int flag = y - mx;
            int cnt = (flag - 1) / v2[mx] + 1;
            ans += cnt;
            y -= cnt * v2[mx];
        }
        ans += v3[y];
    }
    cout << 2 * ans << '\n';
    return 0;
}