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
        string str, tmp = "";
        cin >> str;
        for (int i = 0; i < n; i++)
        {
            if (str[i] == '2')
            {
                tmp += str[i];
            }
            else if (str[i] == '0')
            {
                tmp += str[i];
            }
        }
        bool flag = false;
        for (int i = 0; i < tmp.size(); i++)
        {
            if (tmp[i] == '')
            {
                flag = true;
                break;
            }
        }
        if (flag == true)
        {
            N;
        }
        else
        {
            ll cnt = 0;
            char ch = '2';
            for (int i = 0; i < tmp.size(); i++)
            {
                if (tmp[i] == ch)
                {
                    cnt++;
                    if (cnt == 1)
                        ch = '0';
                    if (cnt == 2)
                        ch = '2';
                    if (cnt == 3)
                    {
                        ch = '0';
                    }
                    if (cnt == 4)
                        break;
                }
            }
            if (cnt == 4)
            {
                Y;
            }
            else
            {
                N;
            }
        }
    }
    return 0;
}