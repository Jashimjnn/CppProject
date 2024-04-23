#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    ll n,k;
    cin>>n>>k;
    vector<ll>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    while(k--)
    {
        ll x;
        cin>>x;
        ll left = 0,right=n-1;
        bool flag = false;
        while(left<=right)
        {
            ll mid = (left+right)/2;
            if(v[mid]==x)
            {
                flag = true;
                break;
            }
            else if(x<v[mid])
            {
                right = mid-1;
            }
            else
            {
                left = mid+1;
            }
        }
        if(flag)
        {
            Y;
        }
        else
        {
            N;
        }
    }
    return 0;
}