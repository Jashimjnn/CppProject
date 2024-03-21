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
    while(t--)
    {
        ll n;
        char ch;
        cin >> n >> ch;
        string str;
        cin >> str;
        str += str;
        ll mx = LLONG_MIN, cnt = 0;
        for (int i = 0; i < 2 * n; i++)
        {
            if (str[i] == ch)
            {
                cnt = 0;
                while (str[i] != 'g' && i < 2 * n)
                {
                    cnt++;
                    i++;
                }
                mx = max(mx, cnt);
            }
        }
        cout << mx << endl;
    }
    return 0;
}