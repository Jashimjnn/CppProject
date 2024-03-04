#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    ll n;
    cin>>n;
    vector<ll>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    ll sum;
    cin>>sum;
    ll dp[n+1][sum+1];
    dp[0][0]=0;
    for(int i=1;i<=sum;i++)
    {
        dp[0][i]=INT_MAX;
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<=sum;j++)
        {
            if(v[i-1]<=j)
            {
                dp[i][j]=min(1+dp[i][j-v[i-1]],dp[i-1][j]);
            }
            else
            {
                dp[i][j]=dp[i-1][j];
            }
        }
    }
    cout<<dp[n][sum]<<endl;
    return 0;
}