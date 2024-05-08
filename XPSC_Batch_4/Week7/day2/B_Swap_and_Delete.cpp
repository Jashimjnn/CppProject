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
        ll cnt1 = 0, cnt0 = 0;
        for (int i = 0; i < str.size(); i++)
        {
            if (str[i] == '1')
            {
                cnt1++;
            }
            else
            {
                cnt0++;
            }
        }
        for (int i = 0; i < str.size(); i++)
        {
            if (str[i] == '1')
            {
                cnt0--;
            }
            else if (str[i] == '0')
            {
                cnt1--;
            }
            if (cnt0 < 0 || cnt1 < 0)
            {
                break;
            }
        }
        if(cnt1<0)
        {
            cnt1=0;
        }
        if(cnt0<0)
        {
            cnt0=0;
        }
        cout << abs(cnt1 + cnt0) << endl;
    }
    return 0;
}