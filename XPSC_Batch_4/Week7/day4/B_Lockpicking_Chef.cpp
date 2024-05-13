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
        ll n, m;
        cin >> n >> m;
        string str;
        cin >> str;
        string str1;
        cin >> str1;
        size_t flag = str.find(str1);
        if (flag != -1)
        {
            cout << 0 << endl;
        }
        else
        {
            ll ans = INT_MAX;
            ll sum = 0, n = str1.size(), j = -1;
            for (int i = 0; i < n; i++)
            {
                ll tm = LLONG_MAX, m = str1.size() - (i + 1), k = j + 1;
                while (k < str.size() - m)
                {
                    ll ttm = (abs((str[k] - '0') - (str1[i] - '0')));
                    if (ttm < tm)
                    {
                        tm = ttm;
                        j = k;
                    }
                    k++;
                }
                sum += tm;
            }
            cout << sum << endl;
        }
    }
    return 0;
}