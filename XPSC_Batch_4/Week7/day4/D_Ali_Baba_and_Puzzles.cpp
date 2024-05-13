#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    if((a+b-c)==d || (a+b*c)==d)
    {
        cout<<"YES"<<endl;
    }
    else if((a-b*c)==d || (a-b+c)==d)
    {
        cout<<"YES"<<endl;
    }
    else if((a*b+c)==d || (a*b-c)==d)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}