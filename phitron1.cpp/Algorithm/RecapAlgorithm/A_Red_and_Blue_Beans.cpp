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
        ll a,b,d;
        cin>>a>>b>>d;
        if(b>a)
        {
            Y;
        }
        else if(abs(a-b)<=d)
        {
            Y;
        }
        else
        {
            N;
        }
    }
    return 0;
}