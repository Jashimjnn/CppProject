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
        vector<ll> v(n);
        vector<ll> v1(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> v1[i];
        }
        ll cnt1 = 0;
        ll cnt2 = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] != v1[i])
            {
                if (v[i] > v1[i])
                {
                    cnt1 += v[i];
                }
                else
                {
                    cnt2 += v1[i];
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (v[i] == v1[i] && v[i] == 1)
            {
                if (cnt1 < cnt2)
                {
                    cnt1++;
                }
                else
                {
                    cnt2++;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (v[i] == v1[i] && v[i] == -1)
            {
                if (cnt1 < cnt2)
                {
                    cnt2--;
                }
                else
                {
                    cnt1--;
                }
            }
        }
        cout << min(cnt1, cnt2) << "\n";
    }
    return 0;
}