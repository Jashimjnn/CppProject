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
        int n, k;
        cin >> n >> k;
        deque<ll>dq(n*k);
        for (auto &i : dq)
        {
            cin >> i;
        }
        ll x = ceil(n / 2.0);
        ll sum = 0;
        ll s = (x - 1) * k;
        ll y = n - x + 1;

        for (int i = s; i < n * k; i += y)
        {
            sum += dq[i];
        }
        cout << sum << endl;
    }
    return 0;
}