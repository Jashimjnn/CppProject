#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
const int X=1e5;
int dp[X];
int fun(int n)
{
    if(n==0 || n==1)
    {
        return n;
    }
    if(dp[n]!=-1)
    {
        return dp[n];
    }
    int ans = fun(n-1)+fun(n-2);
    dp[n]=ans;
    return ans;
}
int main()
{
    int n;
    cin>>n;
    memset(dp,-1,sizeof(dp));
    cout<<fun(n)<<endl;
    return 0;
}