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
        vector<ll> v(n);
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            sum += v[i];
        }
        if (sum % n != 0)
        {
            cout << "No" << endl;
        }
        else
        {
            bool flag = true;
            for (int i = 0; i < n; i++)
            {
                if (((sum/n)-v[i])%2!=0)
                {
                    flag = false;
                    break;
                }
            }
            if (flag == true)
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }
    }
    return 0;
}
