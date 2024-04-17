#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
ll fun(ll x)
{
    return (ll)log2(x);
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        if(n==2)
        {
            cout<<0<<" "<<1<<endl;
            continue;
        }
        ll flag = n-1;
        while(flag>1)
        {
            cout<<flag<<" ";
            if(fun(flag-1)!=fun(flag))
            {
                break;
            }
            flag--;
        }
        for(int i=0;i<flag;i++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}