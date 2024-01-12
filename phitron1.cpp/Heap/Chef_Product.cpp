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
        ll x = sqrtl(n);
        if(n%2==1)
        {
            x++;
        }
        cout<<x/2<<endl;
    }
    return 0;
}