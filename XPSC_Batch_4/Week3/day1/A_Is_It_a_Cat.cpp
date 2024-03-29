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
        transform(str.begin(), str.end(), str.begin(), [](char c)
                  { return tolower(c); });
        str.erase(unique(str.begin(), str.end()), str.end());
        if(str=="meow")
        {
            Y;
        }
        else
        {
            N;
        }
    }
    return 0;
}