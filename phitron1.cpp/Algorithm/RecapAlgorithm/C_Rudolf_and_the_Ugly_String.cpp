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
        string str;
        cin >> str;
        ll cnt = 0;
        for (int i = 0; i < n - 2; i++)
        {
            if (str[i] == 'm' && str[i + 1] == 'a' && str[i + 2] == 'p')
            {
                cnt++;
                i+=2;
            }
            else if (str[i] == 'p' && str[i + 1] == 'i' && str[i + 2] == 'e')
            {
                cnt++;
                i+=2;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}
