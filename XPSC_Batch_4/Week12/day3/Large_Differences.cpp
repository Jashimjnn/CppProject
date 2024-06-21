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
        ll n, k;
        cin >> n >> k;
        deque<ll> dq(n);
        for (int i = 0; i < n; i++)
        {
            cin >> dq[i];
        }
        auto Sum = [](const deque<ll> &dq)
        {
            ll sum = 0;
            for (int i = 0; i < dq.size() - 1; i++)
            {
                sum += abs(dq[i] - dq[i + 1]);
            }
            return sum;
        };
        ll mx = Sum(dq);
        ll i = 0;
        while (i < n)
        {
            ll x = dq[i];
            dq[i] = 1;
            if (dq[i] == 1)
            {
                mx = max(mx, Sum(dq));
            }
            dq[i] = x;
            i++;
        }
        ll mx1 = mx;
        ll j = 0;
        while (j < n)
        {
            ll x = dq[j];
            dq[j] = k;
            if (dq[j] == k)
            {
                mx1 = max(mx1, Sum(dq));
            }
            dq[j] = x;
            j++;
        }
        cout << mx1 << endl;
    }
    return 0;
}