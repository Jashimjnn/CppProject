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
    ll t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        if (n == 1)
        {
            cout << "1" << endl;
            continue;
        }
        if (n == 2)
        {
            cout << "1 2" << endl;
            continue;
        }

        vector<ll> v(n, 0);
        ll cnt = 4;
        v[0] = 2;
        v[n / 2] = 1;
        v[n - 1] = 3;
        for (int i = 0; i < n; i++)
        {
            if (v[i] == 0)
            {
                v[i] = cnt++;
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << v[i];
            if (i != n - 1)
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}