#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define y cout << "YES" << endl;
#define n cout << "NO" << endl;
void display()
{
    ll m, k;
    cin >> m >> k;
    string str;
    cin >> str;
    ll cntb = 0;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == 'B')
        {
            cntb++;
        }
    }
    if (cntb == k)
    {
        cout << 0 << endl;
    }
    else
    {
        if (cntb < k)
        {
            ll cnta = 0;
            for (int i = 0; i < str.size(); i++)
            {
                if (str[i] == 'A')
                {
                    cnta++;
                }
                if (cnta == (k - cntb))
                {
                    cout << 1 << endl
                         << (i + 1) << " "
                         << "B" << endl;
                    break;
                }
            }
        }
        else
        {
            ll cnt = 0;
            for (int i = 0; i < str.size(); i++)
            {
                if (str[i] == 'B')
                {
                    cnt++;
                }
                if (cnt == (cntb - k))
                {
                    cout << 1 << endl
                         << (i + 1) << " "
                         << "A" << endl;
                    break;
                }
            }
        }
    }
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        display();
    }
    return 0;
}