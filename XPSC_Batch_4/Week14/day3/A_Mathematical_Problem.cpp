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
        string str;
        cin >> str;
        if (n == 2)
        {
            cout << stoi(str) << endl;
        }
        else
        {
            ll ans = LLONG_MAX;
            for (int i = 1; i < n; i++)
            {
                vector<ll> v;
                for (int j = 0; j < n; j++)
                {
                    if (j != i && j != i - 1)
                    {
                        v.push_back(str[j] - '0');
                    }
                    else
                    {
                        if (j == i)
                        {
                            v.push_back(stoi(str.substr(j - 1, 2)));
                        }
                    }
                }

                if (count(v.begin(), v.end(), 0))
                {
                    ans = 0;
                }
                else
                {
                    ll sum = 0;
                    for (int num : v)
                    {
                        sum += num;
                    }
                    ans = min(ans, max(1LL, sum - count(v.begin(), v.end(), 1LL)));
                }
            }
            cout << ans << endl;
        }
    }
    return 0;
}
