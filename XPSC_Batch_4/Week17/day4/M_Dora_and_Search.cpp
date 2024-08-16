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
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        deque<ll> dq(n);

        for (ll i = 0; i < n; i++)
        {
            cin >> dq[i];
        }
        ll lft = 1, rght = n;
        ll mn = 1, mx = n;
        while (true)
        {
            if (lft >= rght)
            {
                cout << -1 << endl;
                break;
            }
            if (dq[lft - 1] == mn)
            {
                lft++;
                mn++;
                continue;
            }
            if (dq[rght - 1] == mn)
            {
                rght--;
                mn++;
                continue;
            }
            if (dq[lft - 1] == mx)
            {
                lft++;
                mx--;
                continue;
            }
            if (dq[rght - 1] == mx)
            {
                rght--;
                mx--;
                continue;
            }

            cout << lft << " " << rght << endl;
            break;
        }
    }
    return 0;
}