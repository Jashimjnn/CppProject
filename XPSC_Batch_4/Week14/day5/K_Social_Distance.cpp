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
        string str;
        cin >> str;
        // if (str.size() == k)
        // {
        //     cout << 1 << endl;
        //     continue;
        // }
        // if (str.size() == 0)
        // {
        //     cout << 0 << endl;
        //     continue;
        // }
        ll cnt = 0;
        set<ll>st;
        for (int i = 0; i < n; i++)
        {
            if (str[i] == '1')
            {
                st.insert(i);
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (str[i] == '0')
            {
                auto it = st.lower_bound(i - k);
                if (it == st.end() or *it > i + k)
                {
                    cnt++;
                    str[i] = '1';
                    st.insert(i);
                }
            }
        }
        cout << cnt << endl;
    }
    return 0;
}
