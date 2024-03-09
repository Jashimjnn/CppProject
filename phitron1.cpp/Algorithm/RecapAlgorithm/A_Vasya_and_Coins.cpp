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
        ll a,b;
        cin>>a>>b;
        if(a==0)
        {
            cout<<1<<endl;
        }
        else
        {
            cout<<2*b+a+1<<endl;
        }
    }
    return 0;
}