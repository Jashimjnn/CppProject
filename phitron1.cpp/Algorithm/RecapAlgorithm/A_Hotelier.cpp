#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    ll n;
    cin >> n;
    string str;
    cin >> str;
    vector<char> tmp(10, '0');
    for (int i = 0; i < n; i++)
    {
        if (str[i] == 'L')
        {
            for (int j = 0; j < 10; j++)
            {
                if (tmp[j] == '0')
                {
                    tmp[j] = '1';
                    break;
                }
            }
        }
        else if (str[i] == 'R')
        {
            for (int j = 9; j >= 0; j--)
            {
                if (tmp[j] == '0')
                {
                    tmp[j] = '1';
                    break;
                }
            }
        }
        else
        {
            ll x = str[i] - '0';
            tmp[x] = '0';
        }
    }
    for (int i = 0; i < 10; i++)
    {
        cout << tmp[i];
    }
    cout << endl;
    return 0;
}