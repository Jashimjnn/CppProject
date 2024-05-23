#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    ll l,r;
    cin>>l>>r;
    Y;
    ll x = (r-l+1)/2;
    for(int i=0;i<x;i++)
    {
        cout<<(l+i*2)<<" "<<(l+i*2+1)<<endl;
    }
    return 0;
}