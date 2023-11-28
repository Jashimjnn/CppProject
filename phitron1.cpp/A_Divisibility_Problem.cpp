#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    ll n;
    cin >> n;
    while (n--)
    {
        ll x, y;
        ll cnt = 0;
        cin >> x >> y;
        if(x%y==0)
        {
            cout<<0<<endl;
        }
        else
        {
            ll z = ((x/y)+1)*y;
            cout<<(z-x)<<endl;
        }
    }
    return 0;
}