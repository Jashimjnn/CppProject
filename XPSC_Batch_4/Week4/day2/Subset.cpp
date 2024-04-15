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
    for(int i=0;i<(1<<n);i++)
    {
        for(int k=0;k<n;k++)
        {
            if((i>>k)&1)
            {
                cout<<v[k]<<" ";
            }
            // else
            // {
            //     cout<<0<<" ";
            // }
        }
        cout<<endl;
    }
    return 0;
}