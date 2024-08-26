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
        deque<ll> dq(n);
        set<ll> st;
        for (int i = 0; i < n; i++)
        {
            cin >> dq[i];
            st.insert(dq[i]);
        }
        if (n == 1)
        {
            cout << 0 << endl;
            continue;
        }
        sort(begin(dq),end(dq));
        ll i = 1;
        while (true)
        {
            if (i % 2 == 0)
            {
                dq.pop_back();
            }
            else
            {
                dq.pop_front();
            }
            if(dq.size()==1)
            {
                break;
            }
            i++;
        }
        cout << dq[0] << endl;
    }
    return 0;
}