#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    a%=100;
    b%=100;
    c%=100;
    d%=100;
    int ans = a*b*c*d;
    if(ans%100<=9)
    {
        cout<<0<<ans%100<<endl;
    }
    else
    {
        cout<<ans%100<<endl;
    }
    return 0;
}