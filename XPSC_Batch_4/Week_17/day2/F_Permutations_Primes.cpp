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

        if (n == 1)
        {
            cout << 1 << endl;
            continue;
        }

        if (n == 2)
        {
            cout << "2 1" << endl;
            continue;
        }

        vector<ll> v(n, -1);

        v[n / 2] = 1;
        v[0] = 3;
        v[n - 1] = 2;

        ll cnt = 4;
        for (int i = 1; i <= n - 1; i++)
        {
            if (v[i] != -1)
            {
                continue;
            }
            v[i] = cnt++;
        }

        for (int i = 0; i < n; i++)
        {
            cout << v[i] << " ";
        }

        cout << endl;
    }
    return 0;
}