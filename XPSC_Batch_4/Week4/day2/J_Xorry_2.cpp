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
        ll n;
        cin >> n;
        ll a = 1;
        ll b = 0;
        ll cnt = 0;
        while (a * 2 <= n)
        {
            a *= 2;
            cnt++;
        }
        ll ans =1;
        bool flag = false;
        for (int i = cnt - 1; i >= 0; i--)
        {
            if (n & 1 << i)
            {
                b = b | (1<< i);
                flag = true;
            }
            else
            {
                if(flag==true)
                {
                    ans*=2;
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}