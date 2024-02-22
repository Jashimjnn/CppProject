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
        int n;
        cin >> n;
        int ans, x;
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
        {
            // cin >> x;
            cin >> v[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (i == 0)
            {
                ans = v[i];
            }
            else
            {

                if (v[i] > ans)
                {
                    ans = v[i];
                }
                else
                {
                    ans = (ans / v[i] + 1) * v[i];
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}