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
using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main()
{
    ll n, m;
    cin >> n >> m;
    pbds<ll> pb;
    for (ll i = 1; i <= n; i++)
    {
        ll x;
        cin >> x;
        pb.insert(x);
    }

    for (ll i = 1; i <= m; i++)
    {
        ll x;
        cin >> x;
        cout << pb.order_of_key(x + 1) << " ";
    }
    cout<<endl;

    return 0;
}