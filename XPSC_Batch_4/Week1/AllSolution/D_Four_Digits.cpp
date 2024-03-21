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
    string str = to_string(n);
    ll sz = str.size();
    reverse(str.begin(), str.end());
    string tmp = "";
    if (sz == 1)
    {
        tmp += str[0];
        for (int i = 0; i < 3; i++)
        {
            tmp += '0';
        }
        reverse(tmp.begin(), tmp.end());
        cout << tmp << endl;
    }
    else if (sz == 2)
    {
        for (int i = 0; i < str.size(); i++)
        {
            tmp += str[i];
        }
        for (int i = 0; i < 2; i++)
        {
            tmp += '0';
        }
        reverse(tmp.begin(), tmp.end());
        cout << tmp << endl;
    }
    else if (sz == 3)
    {
        for (int i = 0; i < str.size(); i++)
        {
            tmp += str[i];
        }
        for (int i = 0; i < 1; i++)
        {
            tmp += '0';
        }
        reverse(tmp.begin(), tmp.end());
        cout << tmp << endl;
    }
    else
    {
        reverse(str.begin(), str.end());
        cout << str << endl;
    }
    return 0;
}