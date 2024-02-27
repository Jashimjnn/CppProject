#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
const ll X = 1e6 + 5;
ll dp[X];
bool fun(ll a,ll b)
{
    if (a==b)
    {
        return true;
    }
    if(a>b)
    {
        return false;
    }
    if (dp[a] != -1)
    {
        return dp[a];
    }
    ll ans = fun(a + 3,b) + fun(a * 2,b);
    dp[a] = ans;
    return ans;
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        memset(dp, -1, sizeof(dp));
        bool flag = fun(1,n);
        if(flag==true)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}