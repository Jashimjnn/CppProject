#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
void display()
{
    ll n;
    cin >> n;
    string str1, str2;
    cin >> str1 >> str2;
    ll cnt1 = 0;
    ll cnt2 = 0;
    for(int i=0;i<n;i++)
    {
        if(str1[i]=='1')
        {
            cnt1++;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(str2[i]=='1')
        {
            cnt2++;
        }
    }

    if (cnt1 <= cnt2)
    {
        ll flag = 0;
        for (int i = 0; i < n; i++)
        {
            if ((str2[i] == '1' && str1[i] == '0'))
            {
                flag++;
            }
        }
        cout << flag << endl;
        return;
    }
    ll cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (str2[i] == '1' && str1[i] == '1')
        {
            cnt++;
        }
    }
    ll tmp = cnt2;
    cnt2 -= cnt;

    cout << cnt2 + (cnt1 - tmp) << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        display();
    }
    return 0;
}