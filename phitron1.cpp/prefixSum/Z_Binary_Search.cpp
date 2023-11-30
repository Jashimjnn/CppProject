#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    ll n, q;
    cin >> n >> q;
    ll ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    sort(ar, ar + n);
    while (q--)
    {
        ll x;
        cin >> x;
        ll l = 0;
        ll r = n - 1;
        bool flag = false;
        while (l <= r)
        {
            ll mid = (l + r) / 2;
            if (ar[mid] == x)
            {
                flag = true;
                break;
            }
            // else
            // {
            if (ar[mid] < x)
            {
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
            //}
        }
        if (flag)
        {
            cout << "found" << endl;
        }
        else
        {
            cout << "not found" << endl;
        }
    }
    return 0;
}