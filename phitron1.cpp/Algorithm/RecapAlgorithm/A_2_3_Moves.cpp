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
        if(n==1)
        {
            cout<<2<<endl;
        }
        else if(n==2 || n==3)
        {
            cout<<1<<endl;
        }
        else
        {
            cout<<(n+2)/3<<endl;
        }
    }
    return 0;
}