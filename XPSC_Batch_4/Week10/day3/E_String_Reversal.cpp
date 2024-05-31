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
    ll n;
    cin >> n;
    string str;
    cin >> str;
    string r = str;
    reverse(r.begin(), r.end());
    map<char, vector<ll>> pos_s, pos_r;
    for (int i = 0; i < n; i++)
    {
        pos_s[str[i]].push_back(i);
        pos_r[r[i]].push_back(i);
    }
    vector<ll> v2(n);
    for (char ch = 'a'; ch <= 'z'; ch++)
    {
        for (int i = 0; i < pos_s[ch].size(); i++)
        {
            v2[pos_r[ch][i]] = pos_s[ch][i];
        }
    }
    pbds<ll> p;
    ll ans = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        ans += p.order_of_key(v2[i]);
        p.insert(v2[i]);
    }
    cout << ans << endl;

    return 0;
}