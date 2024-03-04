#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
void Jashim(string str,ll n)
{
    for (int i = 0; i <= 4; i++)
    {
        if (str.substr(0, i) + str.substr(n - 4 + i, 4 - i) == "2020")
        {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
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
        Jashim(str,n);
    }
    return 0;
}