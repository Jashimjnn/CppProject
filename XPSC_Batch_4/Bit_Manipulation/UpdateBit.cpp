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
ll UpdateBit(ll n, ll m, ll value)
{
    ll mask = ~(1 << m);
    n = n & mask;
    return (n | (value << m));
}
int main()
{
    ll n, m, v;
    cin >> n >> m >> v;
    cout << UpdateBit(n, m, v) << endl;
    return 0;
}