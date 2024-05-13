#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    double n,k,a;
    cin>>n>>k>>a;
    ll x = (n*k)/a;
    double d = (n*k)/a;
    if(x>2147483647)
    {
        cout<<"long long"<<endl;
    }
    else if(x-d<2147483647)
    {
        cout<<"int"<<endl;
    }
    else
    {
        cout<<"double"<<endl;
    }
    return 0;
}