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
ll unique(ll ar[],ll n)
{
    ll xorSum=0;
    for(int i=0;i<n;i++)
    {
        xorSum = xorSum^ar[i];
    }
    return xorSum;
}
int main()
{
    ll ar[7] = {1,2,3,4,1,2,3};
    cout<<unique(ar,7)<<endl;
    return 0;
}