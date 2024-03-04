#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b, n;
        cin >> a >> b >> n;
        ll cnt=0;
        while(a<=n && b<=n)
        {
            if(a<b)
            {
                a+=b;
            }
            else
            {
                b+=a;
            }
            cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}