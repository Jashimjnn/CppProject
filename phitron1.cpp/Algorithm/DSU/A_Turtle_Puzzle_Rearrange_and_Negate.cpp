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
        ll n;
        cin>>n;
        vector<ll>v(n);
        ll sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            sum+=abs(v[i]);
        }
        cout<<sum<<endl;
    }
    return 0;
}