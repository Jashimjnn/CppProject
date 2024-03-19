#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
bool valid(vector<ll> &v)
{
    return v == vector<ll>(26, 0);
}
int main()
{
    string str1, str2;
    cin >> str1 >> str2;
    vector<ll> v(26);
    for (int i = 0; i < 26; i++)
    {
        v[i] = 0;
    }
    ll sz = str2.size();
    for (int i = 0; i < sz; i++)
    {
        ll va = str2[i] - 'a';
        v[va]++;
    }
    ll lft = 0, rght = 0;
    ll sz1 = str1.size();
    ll cnt = 0;
    while (rght < sz1)
    {
        ll flag = str1[rght] - 'a';
        v[flag]--;
        if ((rght - lft + 1) == sz)
        {
            if (valid(v))
            {
                cnt++;
            }

            v[str1[lft] - 'a']++;
            lft++;
        }
        rght++;
    }
    cnt;
    cout << cnt << endl;
    return 0;
}