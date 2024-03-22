#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
ll fun(string str1, string str2)
{
    ll cnt = 0;
    for (int i = 0; i < str1.size(); i++)
    {
        cnt += abs(str1[i] - str2[i]);
    }
    return cnt;
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        string str[n];
        for (int i = 0; i < n; i++)
        {
            cin >> str[i];
        }
        ll mn = LLONG_MAX;
        for (int i = 0; i < n; i++)
        {
            for (int j = i+1; j < n; j++)
            {
                ll flag = fun(str[i], str[j]);
                mn = min(mn, flag);
            }
        }
        cout << mn << endl;
    }
    return 0;
}