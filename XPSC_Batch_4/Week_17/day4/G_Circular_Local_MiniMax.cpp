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
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        if (n % 2 == 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            sort(begin(v), end(v));
            vector<ll> v1;
            bool flag = false;

            for (int i = 0; i < n / 2; i++)
            {
                v1.push_back(v[i]);
                v1.push_back(v[i + n / 2]);
            }
            for (int i = 0; i < n - 1; i++)
            {
                if (v1[i] == v1[i + 1])
                {
                    flag = true;
                    break;
                }
            }

            if (flag)
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
                for (auto x : v1)
                {
                    cout << x << " ";
                }
                cout << endl;
            }
        }
    }
    return 0;
}
