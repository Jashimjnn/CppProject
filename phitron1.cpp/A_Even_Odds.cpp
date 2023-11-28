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
    ll x;
    if(n%2==0)
    {
        x=n/2;
    }
    else
    {
        x=(n+1)/2;
    }
    if(k<=x)
    {
        cout<<(k*2)-1<<endl;
    }
    else
    {
        cout<<(k-x)*2<<endl;
    }
    return 0;
}