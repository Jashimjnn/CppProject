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
ll dp[1005];
ll fibo(ll n)
{
    if(n==0 || n==1)
    {
        return n;
    }
    if(dp[n]!=-1)
    {
        return dp[n];
    }
    ll ans = fibo(n-1)+fibo(n-2);
    dp[n] = ans;
    return ans;
}
int main()
{
    ll n;
    cin>>n;
    memset(dp,-1,sizeof(dp));
    cout<<fibo(n)<<endl;
    return 0;
}