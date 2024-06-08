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
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, q;
        cin >> n >> q;
        string str;
        cin >> str;
        vector<vector<ll>> pre(n + 1, vector<ll>(26, 0));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < 26; j++)
            {
                pre[i + 1][j] = pre[i][j];
            }
            pre[i + 1][str[i] - 'a']++;
        }
        while (q--)
        {
            ll l, r;
            cin >> l >> r;
            vector<int> v(26, 0);
            for (int i = 0; i < 26; i++)
            {
                v[i] = pre[r][i] - pre[l - 1][i];
            }

            ll cnt = 0;
            for (int i = 0; i < 26; ++i)
            {
                if (v[i] % 2 != 0)
                {
                    cnt++;
                }
            }
            cout<<cnt<<endl;
        }
    }
    return 0;
}