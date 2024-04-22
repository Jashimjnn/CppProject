#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    ll n,s;
    cin>>n>>s;
    vector<ll>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    ll left=0,right=0;
    ll sum=0,ans = LLONG_MIN;
    while(right<n)
    {
        sum+=v[right];
        if(sum<=s)
        {
            ans = max(ans,right-left+1);
        }
        else
        {
            sum-=v[left];
            left++;
        }
        right++;
    }
    cout<<ans<<endl;
    return 0;
}