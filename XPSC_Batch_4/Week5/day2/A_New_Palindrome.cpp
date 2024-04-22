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
        string str;
        cin >> str;
        str = str.substr(0, str.size() / 2);
        sort(str.begin(), str.end());
        if (str[0] == str.back())
        {
            N;
        }
        else
        {
            Y;
        }
    }
    return 0;
}