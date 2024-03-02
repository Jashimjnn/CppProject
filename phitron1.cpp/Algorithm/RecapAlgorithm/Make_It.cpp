#include <bits/stdc++.h>
using namespace std;
const int X = 1e6 + 5;
int dp[X];
bool Make_it(int x,int y)
{
    if (x==y)
    {
        return true;
    }
    if(x>y)
    {
        return false;
    }
    if (dp[x] != -1)
    {
        return dp[x];
    }
    int Can_reach = Make_it(x + 3,y) + Make_it(x * 2,y);
    dp[x] = Can_reach;
    return Can_reach;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        memset(dp, -1, sizeof(dp));
        if(Make_it(1,n))
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