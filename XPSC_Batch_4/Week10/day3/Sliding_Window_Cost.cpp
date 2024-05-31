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
    ll n, k;
    cin >> n >> k;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    pbds<ll> st;
    for (int i = 0; i < k; i++)
    {
        st.insert(v[i]);
    }
    ll md =*st.find_by_order( ((k + 1) / 2 - 1));
    ll sum = 0;
    for (int i = 0; i < k; i++)
    {
        sum += abs(v[i] - md);
    }
    cout << sum;
    for (int i = 0; i < n - k; i++)
    {
        st.erase(st.find_by_order(st.order_of_key(v[i])));
        st.insert(v[i + k]);
        ll m = *st.find_by_order((k + 1) / 2 - 1);
        sum = sum + abs(m - v[i + k]) - abs(md - v[i]);
        if (k % 2 == 0)
        {
            sum -= abs(m - md);
        }
        else
        {
            md = m;
        }
        cout << " " << sum;
    }
    return 0;
}
