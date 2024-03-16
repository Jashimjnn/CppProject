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
    ll sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        sum+=v[i];
    }
    if(sum%2==0)
    {
        cout<<sum<<endl;
    }
    else
    {
        sort(v.begin(),v.end());
        for(int i=0;i<n;i++)
        {
            if((sum-v[i])%2==0)
            {
                cout<<sum-v[i]<<endl;
                break;
            }
        }
    }
    return 0;
}