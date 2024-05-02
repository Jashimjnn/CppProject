#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        ll left=0,right=1e18-1;
        ll ans;
        while(left<=right)
        {
            ll mid = (right+left)/2;
            if(mid-mid/n>=k)
            {
                ans = mid;
                right = mid-1;
            }
            else
            {
                left = mid+1;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}