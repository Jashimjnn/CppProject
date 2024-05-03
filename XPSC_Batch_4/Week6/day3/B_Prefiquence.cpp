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
        ll n, m;
        cin >> n >> m;
        string str, str1;
        cin >> str;
        cin >> str1;
        ll cnt = 0;
        ll j = 0;
        ll i = 0;
        while (i < m && j < n)
        {
            if (str1[i] == str[j])
            {
                j++;
                cnt++;
            }
            i++;
        }
        cout << cnt << endl;
    }
    return 0;
}
