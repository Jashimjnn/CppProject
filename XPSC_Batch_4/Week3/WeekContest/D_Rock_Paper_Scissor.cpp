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
        string str, str1;
        cin >> str >> str1;
        ll cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (str[i] == 'R' && str1[i] == 'S')
            {
                cnt++;
            }
            else if (str[i] == 'S' && str1[i] == 'P')
            {
                cnt++;
            }
            else if (str[i] == 'P' && str1[i] == 'R')
            {
                cnt++;
            }
            else if(str[i]=='R' && str1[i]=='R')
            {
                continue;
            }
            else if(str[i]=='P' && str1[i]=='P')
            {
                continue;
            }
            else if(str[i]=='S' && str1[i]=='S')
            {
                continue;
            }
        }
        ll ans = n - cnt - 1;
        cout << ans << endl;
    }
    return 0;
}