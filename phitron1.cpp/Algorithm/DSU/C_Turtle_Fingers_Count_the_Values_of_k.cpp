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
        ll a, b, k;
        cin >> a >> b >> k;
        ll ans=0;
        if (a == b)
        {
            ans = 1;
            while (k % a == 0 && k > 0)
            {
                k=k/a;
                ans++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}