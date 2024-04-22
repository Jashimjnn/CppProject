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
    ll cnt=0,sum=0;
    while(right<n)
    {
        sum+=v[right];
        while(sum>=s)
        {
           cnt+=(n-right);
           sum-=v[left];
           left++;
        }
        right++;
    }
    cout<<cnt<<endl;
    return 0;
}