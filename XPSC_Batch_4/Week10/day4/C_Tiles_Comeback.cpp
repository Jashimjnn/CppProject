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
        ll k;
        cin >> k;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        vector<ll> suff(n, 0);
        suff[n - 1] = 1;
        for (ll i = n - 2; i >= 0; i--)
        {
            suff[i] = suff[i + 1] + (a[i] == a[n - 1]);
        }

        if (a[0] == a[n - 1])
        {
            if (suff[0] % k == 0 || suff[0] >= k)
            {
                cout << "YES" << endl;
                continue;
            }
        }

        bool flag = false;
        ll cnt = 0;
        for (ll i = 0; i <= n - 2; i++)
        {
            cnt += (a[i] == a[0]);
            if (cnt % k == 0 && suff[i + 1] >= k)
            {
                flag = true;
                break;
            }
        }

        if (flag==true)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}