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
ll dp[1005][1005];
int main()
{
    ll n,w;
    cin>>n>>w;
    vector<ll>weight(n),value(n);
    for(int i=0;i<n;i++)
    {
        cin>>weight[i]>>value[i];
    }
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=w;j++)
        {
            if(i==0 || j==0)
            {
                dp[i][j]=0;
            }
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=w;j++)
        {
            if(weight[i-1]<=j)
            {
                ll op1 = dp[i-1][j-weight[i-1]]+value[i-1];
                ll op2 = dp[i-1][j];
                dp[i][j] = max(op1,op2);
            }
            else
            {
                ll op2 = dp[i-1][j];
                dp[i][j] = op2;
            }
        }
    }
    cout<<dp[n][w]<<endl;
    return 0;
}