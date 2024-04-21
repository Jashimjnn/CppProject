#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
char fun(ll x)
{
    return 'a' + x-1;
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        string str;
        cin >> str;
        ll i = n - 1;
        string tmp = "";
        while (i >= 0)
        {
            if (str[i] != '0')
            {
                tmp += fun(str[i] - '0');
                i--;
            }
            else
            {
                tmp += fun(stoi(str.substr(i - 2, 2)));
                i -= 3;
            }
        }
        reverse(tmp.begin(), tmp.end());
        cout << tmp << endl;
    }
    return 0;
}