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
        ll n;
        cin >> n;
        set<ll> st;
        ll sum = (1 + n) * n / 2;
        ll x, l = 0;
        for (int i = 1; i < n; i++)
        {
            cin >> x;
            if (x - l <= n)
            {
                st.insert(x - l);
            }
            l = x;
        }
        if (st.size() == n - 2 + (x != sum))
        {
            Y;
        }
        else
        {
            N;
        }
    }
    return 0;
}