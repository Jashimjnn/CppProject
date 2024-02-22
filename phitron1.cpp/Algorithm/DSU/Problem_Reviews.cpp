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
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        bool flag = false;
        for(int i=0;i<n;i++)
        {
            if(v[i]<=4)
            {
                flag=true;
                break;
            }
        }
        if(flag==true)
        {
            N;
        }
        else
        {
            Y;
        }
    }
    return 0;
}