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
bool IsOdd(int i)
{
    return i < 0;
}
int main()
{
    ll n;
    cin >> n;
    vector<ll> v(n), v1(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
    }
    vector<ll> v2;
    v2.resize(16);
    merge(v.begin(), v.end(), v1.begin(), v1.end(), v2.begin());
    for (auto x : v2)
    {
        cout << x << " ";
    }
    return 0;
}