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
ll getBit(ll n, ll pos)
{
    return ((n & (1 << pos)) != 0);
}
ll setBit(ll n, ll pos)
{
    return (n | (1 << pos));
}
ll clearBit(ll n, ll pos)
{
    ll mask = ~(1 << pos);
    return (mask & n);
}
ll updateBit(ll n,ll pos,ll value)
{
    ll mask =~(1<<pos);
    n = n&mask;
    return (n|(value<<pos));
}
int main()
{
    cout << getBit(5, 2) << endl;
    cout << setBit(5, 1) << endl;
    cout << clearBit(5, 2) << endl;
    cout << updateBit(5, 1,1) << endl;
    return 0;
}