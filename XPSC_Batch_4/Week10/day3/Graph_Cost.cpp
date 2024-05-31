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

        stack<ll> st;
        stack<ll> st1;
        ll cst = 0;

        for (int i = 0; i < n; i++)
        {
            while (st.size() > 1 && st.top() > v[i])
            {
                ll cur = st.top();
                st.pop();
                if (cur >= st.top())
                {
                    st1.pop();
                }
                else
                {
                    st.push(cur);
                    break;
                }
            }
            st.push(v[i]);
            st1.push(i);
        }
        ll last_item = st.top();
        st.pop();
        ll last_index = st1.top();
        st1.pop();
        while (!st1.empty())
        {
            cst += max(last_item, st.top()) * (last_index - st1.top());
            last_item = st.top();
            st.pop();
            last_index = st1.top();
            st1.pop();
        }
        cout << cst << endl;
    }
    return 0;
}