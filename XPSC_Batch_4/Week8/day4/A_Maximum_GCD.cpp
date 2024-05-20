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
        if(n>=2)
        {
            cout<<n/2<<endl;
        }
        else
        {
            cout<<1<<endl;
        }
    }
    return 0;
}