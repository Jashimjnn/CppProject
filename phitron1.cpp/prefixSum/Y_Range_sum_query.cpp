#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    ll n,q;
    cin>>n>>q;
    ll ar[n];
    for(int  i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    while(q--)
    {
        ll l,r;
        cin>>l>>r;
        l--;
        r--;
        ll sum=0;
        for(int i=l;i<=r;i++)
        {
            sum+=ar[i];
        }
        cout<<sum<<endl;
    }
    return 0;
}