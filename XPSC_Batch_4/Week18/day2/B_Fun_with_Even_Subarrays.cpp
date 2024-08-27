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
        deque<ll> dq(n+1);
        for (int i = 1; i <= n; i++)
        {
            cin >> dq[i];
        }
        deque<ll>dq1 = dq;
        reverse(dq1.begin() + 1, dq1.end());

        ll cnt = 0, x = 1;

        while (x < n)
        {
            if (dq1[x + 1] == dq1[1])
            {
                x++;
                continue;
            }
            cnt++;
            x *= 2;
        }

        cout << cnt << endl;
    }
    return 0;
}