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
        ll cnt = count(str.begin(), str.end(), 'W');
        if (cnt == n)
        {
            cout << "YES" << endl;
            continue;
        }
        if (n < 3 && cnt == 1)
        {
            cout << "NO" << endl;
            continue;
        }
        bool flagR = false, flagB = false;
        bool flag = true;
        for (int i = 0; i <= n; i++)
        {
            if (i == n || str[i] == 'W')
            {
                if (flagB != flagR)
                {
                    flag = false;
                    break;
                }
                flagR = false;
                flagB = false;
            }
            else
            {
                flagR |= (str[i] == 'R');
                flagB |= (str[i] == 'B');
            }
        }
        if (flag)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}