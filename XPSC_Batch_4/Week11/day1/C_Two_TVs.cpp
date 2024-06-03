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
    map<ll, ll> mp;
    for (ll i = 1; i <= n; i++)
    {
        ll l, r;
        cin >> l >> r;
        mp[l]++;
        mp[r + 1]--;
    }

    ll sum = 0;
    bool flag = true;
    for (auto [idx, value] : mp)
    {
        sum += value;
        if (sum > 2)
        {
            flag = false;
            break;
        }
    }

    if (flag==true)
    {
        Y;
    }
    else
    {
        N;
    }
    return 0;
}