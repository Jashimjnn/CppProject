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
        while(a%b!=0)
        {
            b = (a-1)/(a/b)+1;
        }
        cout<<a/b<<endl;
    }
    return 0;
}